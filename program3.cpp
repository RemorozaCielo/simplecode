#include <iostream>
using namespace std;

int main() {
    double distance, time, speed;

    // Ask the user to input the distance traveled (in kilometers or miles)
    cout << "Enter the distance traveled (in kilometers or miles): ";
    cin >> distance;

    // Ask the user to input the time taken (in hours)
    cout << "Enter the time taken (in hours): ";
    cin >> time;

    // Calculate the speed using the formula: Speed = Distance / Time
    if (time != 0) {
        speed = distance / time;

        // Display the result
        cout << "The speed of the car is: " << speed << " units per hour." << endl;
    } else {
        cout << "Time cannot be zero!" << endl;
    }

    return 0;
}
