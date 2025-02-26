#include <iostream>
#include <cmath>  // For using the M_PI constant
using namespace std;

int main() {
    double diameter, radius, area;

    // Ask the user to input the diameter
    cout << "Enter the diameter of the circle: ";
    cin >> diameter;

    // Calculate the radius
    radius = diameter / 2;

    // Calculate the area using the formula: Area = π * radius^2
    area = M_PI * pow(radius, 2);  // M_PI is a constant in cmath for π

    // Display the result
    cout << "The area of the circle with diameter " << diameter << " is: " << area << endl;

    return 0;
}
