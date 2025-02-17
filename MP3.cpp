#include<iostream>
using namespace std;
double Perisqr(double side)
{
    return 4 * side;
}
double Perirect(double length, double width)
{
    return 2 * (length + width);
}
double Pericirc(double radius)
{
    return 2 * 3.14159 * radius;
}

int main()
{
    double side, length, width, radius;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The perimeter of the square is: " << Perisqr(side) << endl;
    cout << "The perimeter of the rectangle is: " << Perirect(length, width) << endl;
    cout << "The perimeter of the circle is: " << Pericirc(radius) << endl;
    return 0;
}