#include <iostream>
using namespace std;

void add(int* x, int* y, int* result) {
    *result = *x + *y;
}

int main(){
    cout << "Pointers Example usage in functions" << endl;
    int a = 10, b = 20, sum;
    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrSum = &sum;
    add(ptrA, ptrB, ptrSum);

    cout << "result : " <<  *ptrSum ;
    cout << endl;
    return 0;
}