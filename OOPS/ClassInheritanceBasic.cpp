//program with inheritance
#include<iostream>                      //header file
using namespace std;

class Human                            //creating  base or super class
{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    int getWeight(){
        return this->weight;
    }
    int getHeight(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }
    void setHeight(int h){
        this->height = h;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human                //public mode (class) of inheritance
{
    public:
    string Name;

    void setName(string name){
        this -> Name = name;
    }
    void Access(){
        cout << "Access Accessed" << endl;
    }
};

int main()                                              //main function
{
    Male obj1;                                          //creating object
    
    obj1.setAge(21);
    obj1.setWeight(65);
    obj1.setHeight(6);
    obj1.setName("Pratham");

    cout << "Entered Value: " << endl;
    cout <<  "Age: " <<obj1.age << endl;
    cout <<  "Weight: " <<  obj1.weight << endl;
    cout <<  "Height: " << obj1.height << endl;

    cout << "Name: " << obj1.Name << endl;

    cout << endl;
    obj1.Access();

    cout << endl;
    cout << endl;

    return 0;
}