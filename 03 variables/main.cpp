#include <iostream>
using namespace std;

int main(){
    
    int age = 30;
    string name = "John";
    float bankBalance = 1000.50;
    bool isEmployed = true;



    cout << name <<" is a good man" << endl;
    cout << "He is " << age << " years old." << endl;
    cout << "His bank balance is $" << bankBalance << endl;
    cout << "Is he employed? " << (isEmployed ? "Yes" : "No") << endl;

    cout << endl;
    cout << name << " didn't like his name so, " << endl;
    name = "Mike";
    cout << "He changed his name to " << name << endl;
    cout << "Now, " << name << " is " << age << " years old." << endl;
    cout << "His bank balance is still $" << bankBalance << endl;
    cout << "Is he employed? " << (isEmployed ? "Yes" : "No") << endl;

    return 0;
}