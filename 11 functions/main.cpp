#include <iostream>
using namespace std;

// functions
int add(int a, int b){
    return a + b;
}

int main(){
    cout << "functions" << endl;
    int x = 5, y = 10;
    cout << "Sum of " << x << " and " << y << " is: " << add(x, y) << endl;
    
    return 0;
}