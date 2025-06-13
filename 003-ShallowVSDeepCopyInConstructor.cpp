#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    
    public:
    string name;
    double* cgpa; // Pointer to dynamically allocated memory
    
    // Constructor
    Student(string name, double cgpa)
    {
        cout << "Constructor called!" << endl;
        this->name = name;
        this->cgpa = new double; // Allocate memory for cgpa
        *this->cgpa = cgpa; // Assign the value of cgpa
    }

    // Shallow copy Constructor
    // Student(Student &s)   // pass by reference
    // {
    //     cout << "Copy Constructor called!" << endl;
    //     this->name = s.name; // Shallow copy of name
    //     this->cgpa = new double; // Allocate new memory for cgpa
    //     this->cgpa = *(s.cgpa); // Deep copy of cgpa
    // }

    // Deep copy Constructor
    Student(Student &s)   // pass by reference
    {
        cout << "Copy Constructor called!" << endl;
        this->name = s.name; // Shallow copy of name
        cgpa = new double; // Allocate new memory for cgpa
        *cgpa = *s.cgpa; // Deep copy of cgpa
    }

    void getInfo()
    {
        cout << "Name: " << name <<endl;
        cout<<"CGPA: " << *cgpa << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);
    Student s2(s1);

    s1.getInfo();
    s2.name = "Neha";
    *(s2.cgpa) = 9.2;
    s1.getInfo();
    s2.getInfo();
    return 0;
}