#include <iostream>
using namespace std;

int main() {
    int numbers[5];  // Declare an array of size 5

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Take input for each element
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";  // Display array elements
    }

    return 0;
}
