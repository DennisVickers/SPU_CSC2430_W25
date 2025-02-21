#include <iostream>
#include <string>
using namespace std;

// Class Definition (Blueprint)
class Student {
private:
   // Private attributes (Encapsulation)
   string name;
   int id;
   float gpa;

public:
   // Constructor (Called when object is created)
   Student(string studentName, int studentID, float studentGPA) {
      name = studentName;
      id = studentID;
      gpa = studentGPA;
   }

   // Destructor (Called when object is destroyed)
   ~Student() {
      cout << "Destructor called for " << name << endl;
   }

   // Setter methods (Encapsulation)
   void setName(string studentName) { name = studentName; }
   void setID(int studentID) { id = studentID; }
   void setGPA(float studentGPA) { gpa = studentGPA; }

   // Getter methods (Encapsulation)
   string getName() { return name; }
   int getID() { return id; }
   float getGPA() { return gpa; }

   // Member function to display student details
   void displayStudentInfo() {
      cout << "Student Name: " << name << endl;
      cout << "Student ID: " << id << endl;
      cout << "GPA: " << gpa << endl;
   }
};

// Main function to demonstrate OOP
int main() {
   // Creating objects (Instances of the Student class)
   Student alice("Alice", 101, 3.8);
   Student bob("Bob", 102, 3.6);

   // Accessing object methods
   cout << "Student 1 Details: " << endl;
   alice.displayStudentInfo();
   cout << endl;

   cout << "Student 2 Details: " << endl;
   bob.displayStudentInfo();
   cout << endl;

   // Modifying attributes using setters
   alice.setGPA(3.9);
   cout << "Updated GPA of " << alice.getName() << ": " << alice.getGPA() << endl;

   return 0;
} // Destructor automatically called for student1 and student2
