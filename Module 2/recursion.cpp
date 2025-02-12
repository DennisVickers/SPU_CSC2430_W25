#include <iostream>
using namespace std;

// 1. Basic Recursion: Factorial Function
int factorial(int n) {
   // Base Case
   if (n == 0) return 1;  
   
   // Recursive Case
   int fact = 0;
   fact = n * factorial(n - 1);
   return (fact);
   // return n * factorial(n - 1);
};

// 2. Direct Recursion: Fibonacci Series
int fibonacci(int n) {
   if (n <= 1) return n; // Base Cases
   return (fibonacci(n - 1) + fibonacci(n - 2)); // Recursive Case
};

// 3. Indirect Recursion: Even-Odd Check
bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) {
   if (n == 0) return true; // Base Case
   return isOdd(n - 1);  // Indirect Recursion
};

bool isOdd(int n) {
   if (n == 0) return false; // Base Case
   return isEven(n - 1);  // Indirect Recursion
};

// 4. Tail Recursion: Tail Recursive Factorial
int tailFactorialHelper(int n, int result) {
   if (n == 0) return result; // Base Case
   return tailFactorialHelper(n - 1, n * result); // Tail Recursion
};

int tailFactorial(int n) {
   return tailFactorialHelper(n, 1);
};

// Main Function
int main() {
   cout << "Factorial (5): " << factorial(5) << endl;
   cout << "Fibonacci (6): " << fibonacci(6) << endl;
   cout << "Is 5 Even? " << (isEven(5) ? "Yes" : "No") << endl;
   cout << "Tail Factorial (5): " << tailFactorial(5) << endl;

   return 0;
}
