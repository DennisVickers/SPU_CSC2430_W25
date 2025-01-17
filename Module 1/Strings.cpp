#include <iostream>
#include <string>
using namespace std;

int main() {
   // Construction and Initialization
   string defaultStr; // Default constructor
   cout << "Default string: '" << defaultStr << "'\n";
   string copyStr("Hello, World!"); // From C-String
   cout << "Copied string: '" << copyStr << "'\n";
   string substringStr(copyStr, 7, 5); // Substring constructor
   cout << "Substring string: '" << substringStr << "'\n";
   string fillStr(5, 'x'); // Fill constructor
   cout << "Fill string: '" << fillStr << "'\n\n";

   // Basic Operations
   string str1 = "Hello";
   string str2 = "World";
   string concatenated = str1 + ", " + str2 + "!"; // Concatenation
   cout << "Concatenated string: " << concatenated << "\n";

   // Strings are compared character by character based on their ASCII values
   // Shorter strings are smaller than longer strings 
   // if they are identical up to the length of the shorter string.
   bool areEqual = (str1 == "Hello"); // Comparison
   cout << "Are str1 and 'Hello' equal? " << (areEqual ? "Yes" : "No") << "\n";

   char ch = concatenated[7]; // Subscripting
   cout << "Character at index 7 in concatenated: " << ch << "\n\n";

   // Capacity and Size
   cout << "Size of concatenated: " << concatenated.size() << "\n";
   cout << "Length of concatenated: " << concatenated.length() << "\n";
   concatenated.resize(5); // Resize
   cout << "Resized concatenated string: '" << concatenated << "'\n\n";

   // Modifiers
   str1.append(" Everyone"); // Append
   cout << "Appended str1: " << str1 << "\n";

   str1.insert(6, "Dear "); // Insert
   cout << "After insertion: " << str1 << "\n";

   str1.erase(6, 5); // Erase
   cout << "After erasure: " << str1 << "\n";

   str1.replace(6, 8, "Friends"); // Replace
   cout << "After replacement: " << str1 << "\n\n";

   // String Operations
   size_t pos = str1.find("Friends"); // Find
   cout << "Position of 'Friends' in str1: " << pos << "\n";

   string subStr = str1.substr(6, 7); // Substring
   cout << "Substring from str1: " << subStr << "\n\n";

   // Iterators
   cout << "Characters in str1: ";
   for (auto it = str1.begin(); it != str1.end(); ++it) {
      cout << *it << ' ';
   }
   cout << "\n";

   // Conversion to C-String
   const char* cstr = str1.c_str();
   cout << "C-style string: " << cstr << "\n";

   return 0;
}
