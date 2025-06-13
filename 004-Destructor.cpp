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


    // Deep copy Constructor
    Student(Student &s)   // pass by reference
    {
        cout << "Copy Constructor called!" << endl;
        this->name = s.name; // Shallow copy of name
        cgpa = new double; // Allocate new memory for cgpa
        *cgpa = *s.cgpa; // Deep copy of cgpa
    }

    ~Student() {
        cout << "Destructor called!" << endl;
        // Important
        delete cgpa; // Free the dynamically allocated memory
    }

    void getInfo()
    {
        cout << "Name: " << name <<endl;
        cout<<"CGPA: " << *cgpa << endl;
    }
};

int main() {

    Student s1("rahul kumar", 8.9);
    return 0;
}