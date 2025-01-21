#include <iostream>
#include <string>
using namespace std;

// Function that returns an integer (example of return type)
int add(int a, int b) {
   return (a + b);
};

// Function overloading: different signature but same name
string add(const string& a, const string& b) {
   return a + b;
};

// Function with parameters passed by value
void showByValue(int value) {
   value++;
   cout << "Value after increment by value: " << value << endl;
};

// Function with parameters passed by reference
void showByReference(int& value) {
   value++;
   cout << "Value after increment by reference: " << value << endl;
};

// Function that passes and modifies an array
void modifyArray(int arr[], int size) {
   for (size_t i = 0; i < size; ++i) {
      arr[i] *= 2;
   };
};

// Function that takes a string and modifies it
void firstAndLast(string& name) {
   string first = "";
   string last = "";
   char letter;

   // Get first name
   for (size_t i = 0; i < name.size(); i++) {
      letter = name.at(i);
      if (isspace(letter)) {
         break;
      } else {
         first = first + letter;
      };
   };

   // Get last name
   for (size_t i = name.size() - 1; i >= 0; i--) {
      letter = name.at(i);
      if (isspace(letter)) {
         break;
      } else {
         last = letter + last;
      };
   };


   name = first + " " + last;
};

int main() {
   // Demonstration of return types
   int sum = add(5, 7);
   cout << "Sum of integers: " << sum << endl;

   string combined = add("Hello, ", "World!");
   cout << "Concatenated strings: " << combined << endl;

   // Passing by value
   int value = 10;
   showByValue(value);

   // Passing by reference
   showByReference(value);
   cout << "Final value after reference increment: " << value << endl;

   // Passing arrays
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   modifyArray(arr, size);
   cout << "Modified array: ";
   for (size_t i = 0; i < size; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;

   // Passing strings
   string name = "Adilina Bonita Castillo";
   cout << "Full name: " << name << endl;
   firstAndLast(name);
   cout << "First and Last: " << name << endl;

   return 0;
}
