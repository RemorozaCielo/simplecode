#include <iostream>
using namespace std;

int main() {
    double grams, pounds;

    // Ask the user to input grams
    cout << "Enter the weight in grams: ";
    cin >> grams;

    // Conversion factor: 1 gram = 0.00220462 pounds
    pounds = grams * 0.00220462;

    // Display the result
    cout << grams << " grams is equal to " << pounds << " pounds." << endl;

    return 0;
}
