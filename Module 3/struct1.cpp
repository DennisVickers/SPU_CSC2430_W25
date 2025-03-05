#include <iostream>
#include <string>

using namespace std;

// Define a struct to store student information
struct Student {
    string name;
    int age;
    float gpa;
};

// Function to display student information
void displayStudent(const Student& student) {
    cout << "Student Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "GPA: " << student.gpa << endl;
}

int main() {
    // Create a Student instance and initialize it
    Student student1;

    // Get student information from the user
    cout << "Enter student's name: ";
    getline(cin, student1.name);
    cout << "Enter student's age: ";
    cin >> student1.age;
    cout << "Enter student's GPA: ";
    cin >> student1.gpa;

    // Display the student's information
    displayStudent(student1);

    return 0;
}
