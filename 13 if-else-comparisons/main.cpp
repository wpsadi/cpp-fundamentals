#include <iostream>
using namespace std;

int getMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    
}

int main(){
    cout << "if-else-comparisons" << endl;

    int x = 15, y = 25;
    int max = getMax(x, y);


    cout << "The maximum value is: " << max << endl;

    
    return 0;
}