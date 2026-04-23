#include <iostream>
#include <cmath>    
using namespace std;

int main() {

    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    cout << "The volume of the sphere with radius " << radius
         << " is: " << volume << endl;

    return 0;
}
