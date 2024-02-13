//program with inheritance
#include<iostream>                      //header file
using namespace std;

class Human                            //creating  base or super class
{
    public:
    int age;
    int height;
    int weight;
    

    int getAge(){
        return this->age;
    }
    int getWeight(){
        return this->weight;
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

class Pub: public Human                //public mode (class) of inheritance
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
class Pro: protected Human                //public mode (class) of inheritance
{
    public:
    int getWeight() {
        return this-> weight;
    }
};
class Pri: private Human                //public mode (class) of inheritance
{
    
};

int main()                                              //main function
{   Human obj;
    Pub obj1;                                          //creating object
    Pro obj2;
    Pri obj3;

    
    obj.setAge(21);
    obj.setWeight(65);
    obj.setHeight(6);

    cout << "Entered Value: " << endl;
    cout <<  "Base - Public :: Parent - Public " << "" << "Age: " << obj1.getAge() << endl;
    cout <<  "Base - Public :: Parent - Protected " << "" << "Weight: " <<  obj2.getWeight() << endl;
    cout <<  "Base - Public :: Parent - Private " << "" << "Height: " << obj3.height << endl;

    cout << "Name: " << obj1.Name << endl;

    cout << endl;
    obj1.Access();

    cout << endl;
    cout << endl;

    return 0;
}