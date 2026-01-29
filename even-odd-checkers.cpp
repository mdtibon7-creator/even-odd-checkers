#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter an integer.";
        return 0;
    }

    if (number % 2 == 0) {
        cout << "The number is Even";
    } else {
        cout << "The number is Odd";
    }

    return 0;
}
