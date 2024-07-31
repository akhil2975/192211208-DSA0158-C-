#include <iostream>
using namespace std;

int countOccurrences(const int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }
    return count;
}

int main() {
    const int SIZE = 10; 
    int arr[SIZE];

    
    cout << "Enter " << SIZE << " integers for the array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    int value;
    cout << "Enter the value to find occurrences of: ";
    cin >> value;

    
    int occurrences = countOccurrences(arr, SIZE, value);
    cout << "The value " << value << " occurs " << occurrences << " times in the array.\n";

    return 0;
}

