#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <limits>

using namespace std;

int main() {
   // Demonstrating standard input/output
   int number;
   cout << "Enter an integer: ";
   cin >> number;
   if (cin.fail()) {
      cerr << "Invalid input! Please enter an integer." << endl;
      return 1;
   }
   cout << "You entered: " << number << endl;

   // Using stringstream for string manipulation
   stringstream ss;
   ss << "The number you entered is: " << number;
   string message = ss.str();
   cout << message << endl;

   // Writing to a file
   ofstream outFile("output.txt");
   if (!outFile) {
      cerr << "Error opening file for writing." << endl;
      return 1;
   }
   outFile << message << endl;
   outFile.close();

   // Reading from a file
   ifstream inFile("output.txt");
   if (!inFile) {
      cerr << "Error opening file for reading." << endl;
      return 1;
   }
   string fileContent;
   while (getline(inFile, fileContent)) {
      cout << "Read from file: " << fileContent << endl;
   }
   inFile.close();

   // Demonstrating stream manipulators
   double pi = 3.14159265359;
   cout << "Pi to 2 decimal places: " << fixed << setprecision(2) << pi << endl;
   cout << "Pi to 5 decimal places: " << fixed << setprecision(5) << pi << endl;

   // Error handling and stream state
   cout << "Enter another integer: ";
   cin >> number;
   if (cin.fail()) {
      cin.clear(); // Clear error state
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
      cerr << "Error: You did not enter a valid integer!" << endl;
   } else {
      cout << "You entered: " << number << endl;
   }

   return 0;
}
