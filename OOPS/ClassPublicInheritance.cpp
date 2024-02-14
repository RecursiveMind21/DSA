//program with inheritance
#include<iostream>                      //header file
using namespace std;

class Human                            //creating  base or super class
{
    public:                             //public access modifier
    int age;
    int height;
    int weight;
    
    public:                             //public access modifier
    int getAge(){                       //getter
        return this->age;
    }
    int getWeight(){                    //getter
        return this->weight;
    }
    void setAge(int a){                 //setter
        this->age = a;
    }
    void setHeight(int h){              //setter
        this->height = h;
    }
    void setWeight(int w){              //setter
        this->weight = w;
    }
};

class Pub: public Human                //public mode (class) of inheritance
{
    public:                            //public access modifier
    string Name;

    void setName(string name){          //setter
        this -> Name = name;
    }
    void Access(){              
        cout << "Access Accessed" << endl;
    }
};
class Pro: protected Human                //protected mode (class) of inheritance
{
    public:                              //public access modifier
    int getWeight() {                       //getter
        return this-> weight;
    }
};
class Pri: private Human                //public mode (class) of inheritance
{
    public:
    int getHeight(){                    //getter
        return this->height;
    } 
};

int main()                                              //main function
{ 
    Human object;
    Pub obj1;                                          //creating object
    Pro obj2;
    Pri obj3;

    
    obj1.setAge(21);

    cout << "Entered Value: " << endl << endl;
    cout <<  "Base - Public :: Parent - Public " << "" << "Age: " << obj1.getAge() << endl;
    cout <<  "Base - Public :: Parent - Protected " << "" << "Weight: " <<  obj2.getWeight() << endl;
    cout <<  "Base - Public :: Parent - Private " << "" << "Height: " <<  obj3.getHeight() << endl;
    //cout << "Base - Public :: Parent - Private -- " << "In this height cant be accessed" << endl; 

    cout << endl;
    obj1.Access();

    cout << endl;
    cout << endl;

    return 0;
}