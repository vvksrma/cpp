#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    char opr;
    
    cout << "Enter number a: ";
    cin >> a;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> opr;
    
    cout << "Enter number b: ";
    cin >> b;
    
    if (opr == '+') {
        c = a + b;
        cout << "Answer is: " << c << endl;
    } 
    else if (opr == '-') {
        c = a - b;
        cout << "Answer is: " << c << endl;
    } 
    else if (opr == '*') {
        c = a * b;
        cout << "Anser is: " << c << endl;
    } 
    else if (opr == '/') {
        if (b != 0) {
            c = a / b;
            cout << "Anser is: " << c << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } 
    else {
        cout << "Error: Invalid operator." << endl;
    }
    
    return 0;
}
