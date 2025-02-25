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
   string email;
   
protected:
   void setEmail(string studentEmail) { email = studentEmail; };
   // Member function to display student details
   void displayFullStudentInfo() {
      cout << "Full Student Info:\n";
      cout << "Student Name: " << name << endl;
      cout << "Student ID: " << id << endl;
      cout << "Student Email: " << email << endl;
      cout << "GPA: " << gpa << endl;
   };
   
public:
   // Default Constructor
   Student() {
      name = "TBD";
      id = 100;
      gpa = 0.0;
   };

   // Constructor with Parameters (Called when object is created)
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
      cout << "Basic Student Info:\n";
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

   // Default constructor
   Student celine;
   cout << "Student 3 Details: " << endl;
   celine.setName("Celine");
   celine.setID(103);
   celine.setGPA(3.1);
   // celine.setEmail("celine@spu.edu");
   celine.displayStudentInfo();
   cout << endl;

   return 0;
} // Destructor automatically called for student1 and student2
