#include <iostream>
using namespace std;

int main() {
    float height, width, length, weight;
    
    // Input dimensions and weight
    cout << "Enter height (in inches): ";
    cin >> height;
    cout << "Enter width (in inches): ";
    cin >> width;
    cout << "Enter length (in inches): ";
    cin >> length;
    cout << "Enter weight (in ounces): ";
    cin >> weight;
    
    // Calculate volume
    float volume = height * width * length;
    
    // Check conditions
    if (weight <= 8.0 && height <= 19.0 && width <= 19.0 && length <= 19.0 && volume < 4.0) {
        cout << "Quantum Forge 3D Printing Recommended" << endl;
    } else {
        cout << "3D Printing is not Recommended for this object" << endl;
    }

    return 0;
}
