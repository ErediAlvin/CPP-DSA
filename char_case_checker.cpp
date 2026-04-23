//Character Case 
#include <iostream>
#include <cctype> 
using namespace std;

void checkCase(char ch) {
    if (isupper(ch)) {
        
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    } else if (islower(ch)) {
        
        cout << "'" << ch << "' is a lowercase letter." << endl;
    } else {
        
        cout << "'" << ch << "' is neither uppercase nor lowercase "
             << "(it may be a digit or special character)." << endl;
    }
}
int main() {
    
    char userChar;
    cout << "Enter a single character: ";
    cin >> userChar;

    checkCase(userChar);
    return 0;
}
