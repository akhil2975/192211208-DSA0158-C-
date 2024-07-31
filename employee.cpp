#include<iostream>
using namespace std;

class employee {
public:
    
    employee() {
        cout << "Default constructor called." << endl;
    }

    ~employee() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    employee emp1;

    
    return 0;
}

