//program where specific password is requires to enter the details int class
#include<iostream>
using namespace std;

class details
{
    string Name;
    int age;
    
    string ch;

    public:
    void pswd(string c){  
        ch = c;

        if(ch == "Rank"){

            cout << "Enter name: ";
            getline(cin,Name);

            cout << "Enter age: ";
            cin >> age;
        }
        else{
            cout <<"Invalid password!";
        }
    }

    string getName(){
        return Name;
    }
    int getAge(){
        return age;
    }
};

int main()
{
    details d;

    string ch;

    cout << "Enter password: ";
    cin >> ch;

    d.pswd(ch);
    
    cout << endl;
    cout << "<----------------->" << endl;
    cout << "You have entered:" << endl;
    cout << "Name: " << d.getName() << endl;
    cout << "Age: " << d.getAge() << endl;
    cout << "<----------------->";


    cout << endl << endl;
    return 0;
}