#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
   string name;
   int age;
   double gpa;
   static int studentCount;  // Static member variable (shared by all students)

   // Private Helper Method
   void validateGPA(double g);

public:
   // Constructor
   Student(string n, int a, double g);

   // Inline Method
   inline string getName() const { return name; }
   
   // Getter & Setter Methods
   int getAge() const;
   double getGPA() const;
   void setGPA(double g);

   // The "this" Pointer Demonstration
   Student& updateGPA(double newGPA);

   // Static Method
   static int getStudentCount();

   // Display Function
   void display() const;
};

#endif
