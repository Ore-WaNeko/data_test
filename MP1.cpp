#include <iostream>
using namespace std;

// Function to calculate retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * markupPercentage / 100);
}

int main() {
    double wholesaleCost, markupPercentage;

    // Enter the wholesale cost
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;

    // Enter the markup percentage
    cout << "Enter the item's markup percentage: ";
    cin >> markupPercentage;

    // Calculate the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    // Display the retail price
    cout << "The item's retail price is: $" << retailPrice << endl;

    return 0;
}