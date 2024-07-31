#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    string result = (n % 3 == 0) ? "The number is divisible by 3." : "The number is not divisible by 3.";
    cout << result << endl;

    return 0;
}

