#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    private:
    int salary;
    string dept;
    string subject;
    
    public:
    string name;


    // Constructor
    Teacher(string name, string dept, string ssubject)
    {
        cout<<"Constructor called!"<<endl;
        // Initializing member variables
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    // Copy Constructor
    // Creates a shallow copy of the object
    Teacher(Teacher &t)   // pass by reference
    {
        cout<<"Copy Constructor called!"<<endl;
        // Copying member variables from the passed object
        cout<<"Custom copy constructor called!"<<endl;
        this->name = t.name;
        this->dept = t.dept;
        this->subject = t.subject;
        this->salary = t.salary; // Assuming salary is also copied
    }
    
    // setter function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }

    // getter function
    string getName()
    {
        return name;
    }
    string getDept()
    {
        return dept;
    }string getSubject()
    {
        return subject;
    }
    int getSalary()
    {
        return salary;
    }
    void getInfo()
    {
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<subject<<endl;
    }
};

int main()
{
    // Creating an object of Teacher class using the constructor
    Teacher t1("Ayush", "IT", "cloud");

    cout<<t1.getName()<<endl;
    cout<<t1.getDept()<<endl;
    cout<<t1.getSubject()<<endl;

    t1.changeDept("Arts");

    cout<<t1.getDept()<<endl;

    t1.setSalary(50000);

    cout<<t1.getSalary()<<endl;

    // cout<<sizeof(t1)<<endl;
    // cout<<sizeof(Teacher)<<endl;
    cout<<endl;

    Teacher t2(t1);     // Copy constructor invoked
    t2.getInfo();

    return 0;
}
