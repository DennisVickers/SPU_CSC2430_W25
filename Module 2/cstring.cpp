#include <iostream>
#include <cstring> // Required for C-string functions

using namespace std;

int main() {
   // Declaring and initializing C-strings
   char str1[50] = "Hello";
   char str2[] = " World!";
   char str3[50];
   char str4[4] = {'B', 'y', 'e', '\0'};
    
   // Copying C-strings
   strcpy(str3, str1); // Copies "Hello" into str3
   cout << "After strcpy, str3: " << str3 << endl;
    
   // Concatenating C-strings
   strcat(str3, str2); // Appends " World!" to "Hello"
   cout << "After strcat, str3: " << str3 << endl;
    
   // Finding the length of a C-string
   cout << "Length of str3: " << strlen(str3) << endl;
    
   // Comparing C-strings
   if (strcmp(str1, "Hello") == 0) {
      cout << "str1 matches 'Hello'" << endl;
   };
    
   // Searching for a character in a C-string
   char* idx;
   idx = strchr(str3, 'W');
   if (idx != nullptr) {
      cout << "Character 'W' found at element: " << (idx - str3) << endl;
   };
    
   // Searching for a substring in a C-string
   idx = strstr(str3, "World");
   if (idx != nullptr) {
      cout << "Substring 'World' found at element: " << (idx - str3) << endl;
   };
    
   return 0;
};
