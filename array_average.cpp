// Array Average Calculator
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;

    double values[SIZE];

    cout << "Enter " << SIZE << " values:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "  Value " << (i + 1) << ": ";
        cin >> values[i];
    }

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += values[i];
    }

    double average = sum / SIZE;

    cout << "\n--- Results ---" << endl;
    cout << "Sum     : " << sum     << endl;
    cout << "Average : " << average << endl;

    return 0;
}
