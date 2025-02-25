#include "Student.h"

int main() {
   cout << "Creating Students...\n" << endl;

   // Creating Student Objects
   Student s1("Alice", 20, 3.8);
   Student s2("Bob", 22, 2.5);
   Student s3("Charlie", 19, 4.2);  // Invalid GPA, will be set to 0.0

   // Display Student Information
   s1.display();
   s2.display();
   s3.display();

   cout << "\nUpdating GPA using 'this' pointer...\n" << endl;
   s2.updateGPA(3.6).display();  // Chained function call

   // Display Student Count
   cout << "\nTotal Students Created: " << Student::getStudentCount() << endl;

   return 0;
}
