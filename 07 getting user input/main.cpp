#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    
    cout << "Enter your name: ";
    getline(cin, name); // u can't use cin >> for strings 
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}