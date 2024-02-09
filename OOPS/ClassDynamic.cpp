//program for accessing class using dynamic memory alloaction
#include<iostream>              //header file
#include<string.h>              

using namespace std;    

class Student                   //class declaration
{
    string Name;                //string for name
    int roll;                   //int declaration
    string Branch;

    public:                     //public access modifier
    void getData();
    void Display();
};

void Student::getData()                     //function for class
{
    cout << "Enter student's name: ";
    getline(cin,Name);
    cout << "Enter student's roll number: ";
    cin >> roll;
    cout << "Enter student's branch: ";
    cin.ignore();
    getline(cin,Branch);
}
void Student::Display()                     //function for class
{
    cout << "<------------------------>" << endl;
    cout << "Your entered details are: " << endl;
    cout << "Name: " << Name << endl;
    cout << "Roll Numeber: " << roll << endl;
    cout << "Branch: " << Branch << endl;
    cout << "<------------------------>" << endl;
}

int main()                                  //main function
{
    //static allocation
    Student s1;

    cout << "For Static Allocation" << endl;
    s1.getData();                                   //calling functions in class using
    s1.Display();                                   //static memory allocation

    //dynamic allocation
    Student *s2 = new Student;

    cout << "For Dynamic Allocation" << endl;
    s2->getData();                                  //calling function in class using 
    s2->Display();                                  //dynamic memory allocation


    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}