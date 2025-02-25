#include "Student.h"

// Initialize static member variable
int Student::studentCount = 0;

// Constructor
Student::Student(string n, int a, double g) : name(n), age(a), gpa(0.0) {
   studentCount++;
   validateGPA(g);  // Call private helper method
}

// Private Helper Method to Validate GPA
void Student::validateGPA(double g) {
   if (g >= 0.0 && g <= 4.0) {
      gpa = g;
   } else {
      cout << "Invalid GPA! Setting to default (0.0)." << endl;
      gpa = 0.0;
   }
}

// Getter Methods
int Student::getAge() const {
   return age;
}

double Student::getGPA() const {
   return gpa;
}

// Setter Method
void Student::setGPA(double g) {
   validateGPA(g);
}

// Using "this" Pointer for Method Chaining
Student& Student::updateGPA(double newGPA) {
   this->setGPA(newGPA);  // Using "this" pointer
   return *this;  // Returning object reference to enable method chaining
}

// Static Method
int Student::getStudentCount() {
   return studentCount;
}

// Display Student Details
void Student::display() const {
   cout << "Student Name: " << name << "\nAge: " << age << "\nGPA: " << gpa << endl;
}
