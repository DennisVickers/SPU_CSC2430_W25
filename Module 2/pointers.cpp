#include <iostream>
#include <string>

using namespace std;

// Function demonstrating pointer passing
void modifyValue(int* ptr) {
   if (ptr) {
      *ptr += 10; // Modifies the original variable
   }
};

// Function demonstrating pointer arithmetic
void pointerArithmetic(int* arr, int size) {
   cout << "Pointer Arithmetic on Array:\n";
   for (int i = 0; i < size; ++i) {
      cout << "Element " << i << " (via pointer): " << *(arr + i) << endl;
   };
};

int main() {
   // Declaration and Initialization
   int var = 10;
   int* ptr = &var;
   cout << "Pointer points to value: " << *ptr << endl;

   // Dereferencing Pointers
   int value = *ptr;
   cout << "Dereferenced value: " << value << endl;

   // Pointer Arithmetic
   int arr[] = {1, 2, 3, 4, 5};
   pointerArithmetic(arr, 5);

   // Null Pointers
   int* nPtr = nullptr;
   if (!nPtr) {
      cout << "Null pointer is safe to use." << endl;
   };

   // Pointers to Pointers
   int** ptrPtr = &ptr;
   cout << "Pointer to pointer value: " << **ptrPtr << endl;

   // Dynamic Memory Allocation
   int* dynamicPtr = new int(20);
   cout << "Dynamically allocated value: " << *dynamicPtr << endl;
   delete dynamicPtr; // Freeing memory

   // Arrow Operator
   string* strPtr = new string("Hello, Pointers!");
   cout << "String length using arrow operator: " << strPtr->length() << endl;
   delete strPtr;

   // Pointer in Functions
   cout << "Original var value: " << var << endl;
   modifyValue(&var);
   cout << "Modified var value: " << var << endl;

   return 0;
};
