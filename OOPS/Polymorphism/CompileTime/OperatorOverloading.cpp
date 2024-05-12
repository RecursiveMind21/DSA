//program demonstrating use of operator overloading in cpp
#include<iostream>                  //header file
using namespace std;

class B                              //class creation
{
    public:                         //public access modifier
    int a;
    int b;

    public:                         //public access modifier
    int add(){
        return a+b;
    }

    void operator+ (B &obj){            //operator overloading for + operator
        int value1 = this-> a;
        int value2 = obj.a;
        cout << "Sum: " << value2 - value1 << endl;
    }
    void operator* (B &obj){           //operator overloading for * operator
        int value1 = this-> a;
        int value2 = obj.a;
        cout << "Product: " << value2 + value1 << endl;
    }
};

int main()                              //main function
{
    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    cout << "After overloading + operator to function as -: " << endl;
    obj1 + obj2;
    cout << "After overloading * operator to function as +: " << endl;
    obj1 * obj2;

    return 0;
}