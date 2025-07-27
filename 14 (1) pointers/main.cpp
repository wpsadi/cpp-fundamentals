#include <iostream>
using namespace std;

int main(){
    
    int age = 20;
    int* agePtr = &age;

    cout << "Pointers Example" << endl;
    cout << "Age: " << age << endl;
    cout << "Age via pointer: " << *agePtr << endl;
    cout << "Address of age variable: " << &age << endl;
    cout << "Address stored in agePtr: " << agePtr << endl;

    cout << "referenceng and defreerncing pointer of age : "<< *(&age) << endl;
    return 0;
}