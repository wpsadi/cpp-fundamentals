#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout << "Square root of 16: " << sqrt(16) << endl; // Output: 4
    cout << "Cube root of 27: " << cbrt(27) <<
    endl; // Output: 3
    cout << "Power of 2^3: " << pow(2, 3) << endl; // Output: 8
    cout << "Logarithm base 10 of 100: " << log10(100) << endl; // Output: 2
    cout << "Natural logarithm of e: " << log(M_E) << endl; // Output: 1
    cout << "Exponential of 1: " << exp(1) << endl; // Output: 271828
    cout << "Sine of 30 degrees: " << sin(30 * M_PI / 180) << endl; // Output: 0.5
    cout << "Cosine of 60 degrees: " << cos(60 * M_PI / 180) << endl; // Output: 0.5
    cout << endl; 
    // using fmax
    cout << "Maximum of 5 and 10: " << fmax(5, 10) << endl; // Output: 10
    cout << "Minimum of 5 and 10: " << fmin(5, 10) << endl; // Output: 5
    cout << "Absolute value of -5: " << fabs(-5) << endl; // Output: 5
    cout << "Ceiling of 4.2: " << ceil(4.2) << endl; // Output: 5
    cout << "Floor of 4.8: " << floor(4.8) << endl; // Output: 4
    cout << "Round of 4.5: " << round(4.5) << endl; // Output: 5
    cout << "Truncate of 4.9: " << trunc(4.9) << endl; // Output: 4
    cout << "Hypotenuse of 3 and 4: " << hypot(3, 4) << endl; // Output: 5
    cout << "Remainder of 10 divided by 3: " << fmod(10, 3) << endl; // Output: 1
    return 0;
}