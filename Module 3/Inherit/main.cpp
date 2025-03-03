#include <iostream>
#include "classes.cpp"
using namespace std;

// Main function to test the program
int main() {
   SPUMember* members[] = {
      new Student("Alice", 20, "Computer Science", 2),
      new Professor("Dr. Smith", 45, "Engineering", "AI"),
      new GraduateStudent("Bob", 25, "Physics", 5, "Quantum Mechanics"),
      new Admin("Ms. Johnson", 40, "Admissions"),
      new Staff("Mr. Brown", 35, "Library")
   };

    // Display information for each SPU member
    for (auto member : members) {
        member->displayInfo();
        cout << "---------------------------------\n";
    }

    // Cleanup memory
    for (auto member : members) {
        delete member;
    }

    return 0;
}
