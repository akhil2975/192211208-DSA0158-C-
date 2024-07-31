#include <iostream>
using namespace std;


void printDetails(string name, int age = 18, string city = "Unknown") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}
int main() {
    
    printDetails("Alice", 25, "New York");

   
    printDetails("Bob", 30);

   
    printDetails("Charlie");

    return 0;
}
