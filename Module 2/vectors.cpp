#include <iostream>
#include <vector>

using namespace std;

// Function to display vector elements
void displayVector(const vector<int>& vec) {
   cout << "Vector elements: ";
   for (int num : vec) {
      cout << num << " ";
   };
   cout << endl;
};

// Function to modify the vector by doubling each element
void modifyVector(vector<int>& vec) {
   for (int& num : vec) {
      num *= 2;
   };
};

int main() {
   // Different ways to initialize a vector
   vector<int> vec1 = {1, 2, 3, 4, 5};  // Initialization list
   vector<int> vec2(5, 10);  // 5 elements, each initialized to 10
   vector<int> vec3(vec1.begin(), vec1.end()); // Copying another vector

   // Displaying initialized vectors
   cout << "vec1 (initialized with values): ";
   displayVector(vec1);

   cout << "vec2 (5 elements initialized to 10): ";
   displayVector(vec2);

   cout << "vec3 (copy of vec1): ";
   displayVector(vec3);

   // Accessing elements in a vector
   cout << "First element of vec1: " << vec1.front() << endl;
   cout << "Last element of vec1: " << vec1.back() << endl;
   cout << "Third element of vec1 (using at()): " << vec1.at(2) << endl;
   cout << "Third element of vec1 (using []): " << vec1[2] << endl;

   // Modifying vector using member functions
   cout << "\nAdding elements to vec1 using push_back()...\n";
   vec1.push_back(6);
   vec1.push_back(7);
   displayVector(vec1);

   cout << "Removing last element using pop_back()...\n";
   vec1.pop_back();
   displayVector(vec1);

   // Using size() and empty()
   cout << "Size of vec1: " << vec1.size() << endl;
   cout << "Is vec1 empty? " << (vec1.empty() ? "Yes" : "No") << endl;

   // Clearing the vector
   cout << "Clearing vec1...\n";
   vec1.clear();
   cout << "Size after clear: " << vec1.size() << endl;
   cout << "Is vec1 empty after clear? " << (vec1.empty() ? "Yes" : "No") << endl;

   // Demonstrating modification of a vector
   cout << "\nModifying vec3 (doubling each element)...\n";
   modifyVector(vec3);
   displayVector(vec3);

   return 0;
}
