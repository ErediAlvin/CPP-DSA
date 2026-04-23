#include <iostream>
using namespace std;

int main() {
    int days;
       
    cout << "Enter the number of days: ";
    cin >> days;

    long long seconds = (long long)days * 24 * 60 * 60;

    cout << days << " day(s) = " << seconds << " seconds" << endl;

    return 0;
}
