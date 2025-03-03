#include <iostream>
#include <string>
using namespace std;

// Base Class (Single Inheritance)
class SPUMember {
   protected:
      string name;
      int age;
   public:
      SPUMember(string n, int a) : name(n), age(a) {}
   
      virtual void displayInfo() const {
         cout << "Name: " << name << ", Age: " << age << endl;
      }
   
      virtual ~SPUMember() {}
   };
   
   // Single Inheritance: Student inherits from SPUMember
   class Student : public SPUMember {
   protected:
      string major;
      int year;
   public:
      Student(string n, int a, string m, int y) : SPUMember(n, a), major(m), year(y) {}
   
      void displayInfo() const override {
         cout << "Student: " << name << ", Age: " << age << ", Major: " << major 
              << ", Year: " << year << endl;
      }
   };
   
   // Multiple Inheritance: Professor inherits from SPUMember and Researcher
   class Researcher {
   protected:
      string researchField;
   public:
      Researcher(string field) : researchField(field) {}
   
      void showResearch() const {
         cout << "Research Field: " << researchField << endl;
      }
   };
   
   // Multiple Inheritance Demonstration
   class Professor : public SPUMember, public Researcher {
   private:
      string department;
   public:
      Professor(string n, int a, string dept, string field)
         : SPUMember(n, a), Researcher(field), department(dept) {}

      void displayInfo() const override {
         cout << "Professor: " << name << ", Age: " << age 
              << ", Department: " << department << endl;
         showResearch(); // Demonstrates calling function from Researcher
      }
   };
   
   // Multilevel Inheritance: GraduateStudent inherits from Student
   class GraduateStudent : public Student {
   private:
      string thesisTitle;
   public:
      GraduateStudent(string n, int a, string m, int y, string thesis)
         : Student(n, a, m, y), thesisTitle(thesis) {}
   
      void displayInfo() const override {
         cout << "Graduate Student: " << name << ", Age: " << age 
              << ", Major: " << major << ", Thesis: " << thesisTitle << endl;
      }
   };
   
   // Hierarchical Inheritance: Admin and Staff both inherit from SPUMember
   class Admin : public SPUMember {
   private:
      string role;
   public:
      Admin(string n, int a, string r) : SPUMember(n, a), role(r) {}
   
      void displayInfo() const override {
         cout << "Admin: " << name << ", Age: " << age 
              << ", Role: " << role << endl;
      }
   };
   
   class Staff : public SPUMember {
   private:
      string department;
   public:
      Staff(string n, int a, string dept) : SPUMember(n, a), department(dept) {}
   
      void displayInfo() const override {
         cout << "Staff: " << name << ", Age: " << age 
              << ", Works in: " << department << endl;
      }
   }; 

   