#include <iostream>
using namespace std;

int main(){
    string text = "Hello, C++ Strings!";
    cout << text << endl;
    cout << "Length of the string: " << text.length() << endl;
    cout << "First character: " << text[0] << endl;
    cout << "Last character: " << text[text.length() - 1] << endl;
    cout << "Substring (0, 5): " << text.substr(4,2) << endl; // (index, length)
    cout << "Find 'C++': " << text.find("C++",5) << endl;
    cout << "Replace 'C++' with 'CPP': "
         << text.replace(text.find("C++"), 3, "CPP") << endl;
    cout << "Uppercase: ";
    for (char c : text) {
        cout << (char)toupper(c);
    }
    cout << endl;

    return 0;
} 