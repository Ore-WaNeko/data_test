#include<iostream>
using namespace std;

double labor = 120.00;
const double sqrftgal = 115.00;
const double hrsprgal = 8.00;

int NumGallons(double totalSqrFt);
double CalLaborHours(int gallons);
double CalPaintCost(int gallons, double paintPrice);
double CalLaborCost(double laborHours);
double CalTotalCost(double paintCost, double laborCost);

int main() {
    int numRooms;
    double paintPrice, totalSqrFt = 0.0, squarefeet;

    cout << "Enter the number of rooms: ";
    cin >> numRooms;

    cout << "Enter the price of the paint per gallon: ";
    cin >> paintPrice;

    for (int i = 0; i < numRooms; i++) {
        cout << "Enter the square footage of room " << i + 1 << ": ";
        cin >> squarefeet;
        totalSqrFt += squarefeet;
    }

    int gallons = NumGallons(totalSqrFt);
    double laborHours = CalLaborHours(gallons);
    double paintCost = CalPaintCost(gallons, paintPrice);
    double laborCost = CalLaborCost(laborHours);
    double totalCost = CalTotalCost(paintCost, laborCost);

    cout << "The number of gallons of paint required is: " << gallons << endl;
    cout << "The number of hours of labor required is: " << laborHours << endl;
    cout << "The cost of the paint is: $" << paintCost << endl;
    cout << "The cost of the labor is: $" << laborCost << endl;
    cout << "The total cost of the paint job is: $" << totalCost << endl;
}

int NumGallons(double totalSqrFt){
    return (totalSqrFt / sqrftgal);
}
double CalLaborHours(int gallons){
    return (gallons * hrsprgal);
}
double CalPaintCost(int gallons, double paintPrice){
    return (gallons * paintPrice);
}
double CalLaborCost(double laborHours){
    return (laborHours * labor);
}
double CalTotalCost(double paintCost, double laborCost){
    return (paintCost + laborCost);
}