#include <iostream>
#include <string>
using namespace std;

int isValidUsername(const string& username1, const string& username2) {
    if (username1 == username2) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    string username1, username2;

    cout << "Enter the user name: ";
    getline(cin, username1);

    cout << "Reenter the user name: ";
    getline(cin, username2);

    if (isValidUsername(username1, username2) == 1) {
        cout << "The user name is valid." << endl;
    } else {
        cout << "The user name is not valid." << endl;
    }

    return 0;
}

