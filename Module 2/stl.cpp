#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>  // For accumulate
using namespace std;

int main() {
   // 1. Using Sequence Container - Vector
   vector<int> vec = {5, 3, 8, 1, 9};
    
   // Sorting the vector
   sort(vec.begin(), vec.end());

   cout << "Sorted Vector: ";
   for (int n : vec) cout << n << " ";
   cout << endl;

   // Using an iterator to traverse the vector
   cout << "Using Iterator: ";
   vector<int>::iterator it;
   for (it = vec.begin(); it != vec.end(); it++) {
      cout << *it << " ";
   }
   cout << endl;

   // 2. Using Associative Container - Set
   set<int> mySet = {5, 3, 5, 8, 1, 9}; // Automatically removes duplicates
   cout << "Set Elements: ";
   for (int s : mySet) cout << s << " ";
   cout << endl;

   // 3. Using Associative Container - Map
   map<int, string> fruit;
   fruit[1] = "Apple";
   fruit[2] = "Banana";
   fruit[3] = "Cherry";

   map<int,string>::iterator kvp;

   cout << "Map Elements:\n";
   for (kvp = fruit.begin(); kvp != fruit.end(); kvp++) {
      cout << kvp->first << " - " << kvp->second << endl;
   };

   // 4. Using Container Adapter - Stack
   stack<int> myStack;
   myStack.push(10);
   myStack.push(20);
   myStack.push(30);

   cout << "Stack Elements (LIFO Order): ";
   while (!myStack.empty()) {
      cout << myStack.top() << " ";
      myStack.pop();
   }
   cout << endl;

   // 5. Using Container Adapter - Queue
   queue<int> myQueue;
   myQueue.push(100);
   myQueue.push(200);
   myQueue.push(300);

   cout << "Queue Elements (FIFO Order): ";
   while (!myQueue.empty()) {
      cout << myQueue.front() << " ";
      myQueue.pop();
   }
   cout << endl;

   // 6. Using Algorithms - accumulate, find
   int sum = accumulate(vec.begin(), vec.end(), 0);
   cout << "Sum of Vector Elements: " << sum << endl;

   // Searching an element using find()
   auto found = find(vec.begin(), vec.end(), 8);
   if (found != vec.end())
      cout << "Element 8 found in vector at index: " << distance(vec.begin(), found) << endl;
   else
      cout << "Element 8 not found in vector." << endl;

    return 0;
}
