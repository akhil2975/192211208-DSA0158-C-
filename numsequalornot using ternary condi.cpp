#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Using ternary conditional operator to check equality
    string result = (num1==num2) ? "Numbers are equal" : "Numbers are not equal";
    
    cout << result << endl;
    
    return 0;
}

