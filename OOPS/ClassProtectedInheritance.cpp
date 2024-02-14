#include<iostream>                  //header file

using namespace std;

class Human                         //parent class
{
    protected:
    int height;
    int weight;

};

class Pub: public Human                     //child class with public mode of inheritance
{
    public:                                 //public access modifier
    int getHeight(){                        //getter
        return this -> height;
    }
    
};

class Pro: protected Human                  //child class with protected mode of inheritance
{
    public:                                 //public access modifier
    int getWeight(){                        //getter
        return this -> weight;
    }
};

class Pri: private Human                    //child class with private mode of inheritace
{
    public:                                 //public access modifier
    int getWeight(){                        //getter
        return this -> weight;
    }
};

int main()
{
    Pub obj1;               //creating object
    Pro obj2;
    Pri obj3;

    cout << "Base - Protected :: Parent - Public " << "Height: " << obj1.getHeight() << endl;
    cout << "Base - Protected :: Parent - Protected " << "Weight: " << obj2.getWeight() << endl;
    cout << "Base - Protected :: Parent - Private " << "Weight: " << obj3.getWeight() << endl;

    cout << endl;
    return 0;
}