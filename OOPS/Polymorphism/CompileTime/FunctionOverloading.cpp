//program demonstrating use of function overloading in cpp
#include<iostream>                  //header file
#include<math.h>
using namespace std;

class Math                              //class creation
{
    public:                             //public access modifier
    int area(int side){
        int ans = pow(side,2);
        return ans;
    }
    double area(double radius){
        double ans = 3.14 * pow(radius,2);
        return ans;
    }
    double area(float height, float base){
        double ans = 0.5 * base * height;
        return ans;
    }
};

int main()                              //main function
{
    Math m;                             //object creation

    int side;
    cout << "Enter side of square: ";
    cin >> side;

    cout << "<------------------>" << endl;
    cout << "Area of square: " << m.area(side) << endl;
    cout << "<------------------>" << endl;

    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "<------------------>" << endl;
    cout << "Area of circle: " << m.area(radius) << endl;
    cout << "<------------------>" << endl;

    float height;
    float base; 
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Enter base of triangle: ";
    cin >> base;

    cout << "<------------------>" << endl;
    cout << "Area of triangle: " << m.area(height, base) << endl;
    cout << "<------------------>" << endl;

    return 0;


    /*there are three ways to overload a function 
        1. using different datatype of input parameter
        2. changing the sequence of datatype
        3. by taking different number of input parameter
    */
}