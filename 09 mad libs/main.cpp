#include <iostream>
using namespace std;

int main(){
    
    cout << "Welcome to the Mad Libs game!" << endl;
    cout << "Please provide the following inputs:" << endl;
    string adjective, noun, verb, place;
    int number;
    cout << "Enter an adjective: ";
    getline(cin, adjective);
    cout << "Enter a noun: ";
    getline(cin, noun);
    cout << "Enter a verb: ";
    getline(cin, verb);
    cout << "Enter a place: ";
    getline(cin, place);
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nHere is your Mad Libs story:" << endl;
    cout << "Once upon a time, in a " << adjective << " " << place << ", there was a " << noun 
         << ". Every day, it would " << verb << " " << number << " times. Everyone loved the " 
         << noun << " because it was so " << adjective << "!" << endl;
    cout << "Thank you for playing the Mad Libs game!" << endl;
    return 0;
}
