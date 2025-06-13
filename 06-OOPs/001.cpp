#include<iostream>
#include<string>
using namespace std;


class Teacher
{
    private:
    int salary;
    
    public:
    string name;
    string dept;
    string subject;

    // setter function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // getter function
    string getName()
    {
        return name;
    }
};

int main()
{
    Teacher obj1;
    obj1.name = "Ayush";
    obj1.dept = "IT";
    obj1.subject = "cloud";

    cout<<obj1.name<<endl;
    cout<<obj1.dept<<endl;
    cout<<obj1.subject<<endl;
    
    obj1.changeDept("Arts");

    cout<<obj1.dept<<endl;

    return 0;
}