#include <iostream>
using namespace std;

int main(){
    
    cout << "if-else" << endl;

    int a = 10, b = 20;
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }
    return 0;
}