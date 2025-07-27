#include <iostream>
using namespace std;

int main(){
    
    cout << "arrays" << endl;
    int arr[5] = {9, 2, 3, 4, 5};

    cout << "1st element: " << arr[0] << endl;


    // taking input from user
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int userArr[size]; // Variable length array (VLA) - allowed in C++
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        cin >> userArr[i];
    }
    return 0;
}