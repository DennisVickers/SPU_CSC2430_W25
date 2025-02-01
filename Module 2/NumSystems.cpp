/*
 * Demonstration code to show the follow:
 * 1) Converting Integer to Binary
 * 2) Converting Binary to Integer
 * 3) Converting Integer to Hexadecimal
 * 4) Converting Hexadecimal to Integer
*/
#include <iostream>
#include <bitset>
#include <cmath>
#include <sstream>

using namespace std;

/* Function Prototypes */
string integerToBinary(int num); // Function to convert integer to binary
int binaryToInteger(string binary); // Function to convert binary to integer
string integerToHex(int num); // Function to convert integer to hexadecimal
int hexToInteger(string hexNum); // Function to convert hexadecimal to integer

int main() {
   int choice;
   string val2Convert;

   do {
      cout << "\nNumber System Conversion Menu:\n";
      cout << "1. Convert Integer to Binary\n";
      cout << "2. Convert Binary to Integer\n";
      cout << "3. Convert Integer to Hexadecimal\n";
      cout << "4. Convert Hexadecimal to Integer\n";
      cout << "5. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;

      switch (choice) {
      case 1:
         cout << "Enter an integer number: ";
         cin >> val2Convert;
         cout << "Binary representation: " << integerToBinary(stoi(val2Convert)) << endl;
         break;
      case 2:
         cout << "Enter a binary number: ";
         cin >> val2Convert;
         cout << "Integer representation: " << binaryToInteger(val2Convert) << endl;
         break;
      case 3:
         cout << "Enter an integer number: ";
         cin >> val2Convert;
         cout << "Hexadecimal representation: " << integerToHex(stoi(val2Convert)) << endl;
         break;
      case 4:
         cout << "Enter a hexadecimal number: ";
         cin >> val2Convert;
         cout << "Integer representation: " << hexToInteger(val2Convert) << endl;
         break;
      case 5:
         cout << "Exiting program...\n";
         break;
      default:
         cout << "Invalid choice! Please try again.\n";
         break;
      };

    } while (choice != 5);

    return 0;
};

string integerToBinary(int num) {
   string binary = "";
   while (num > 0) {
      binary = to_string(num % 2) + binary;
      num /= 2;
   }
   return (binary.empty()) ? "0" : binary;
};

int binaryToInteger(string binary) {
   int decimal = 0;
   int length = binary.length();
   for (int i = 0; i < length; i++) {
      if (binary[length - 1 - i] == '1') {
         decimal += pow(2, i);
      }
   }
   return decimal;
};

string integerToHex(int num) {
   stringstream ss;
   ss << hex << uppercase << num;
   return ss.str();
};

int hexToInteger(string hexNum) {
   int decimal;
   stringstream ss;
   ss << hex << hexNum;
   ss >> decimal;
   return decimal;
};