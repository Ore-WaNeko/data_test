#include<iostream>
using namespace std;
double Ave(double num1, double num2)
{
    return (num1 + num2) / 2;
}

double SumSqr(double num1, double num2)
{
    return num1 * num1 + num2 * num2;
}

double SqrSum(double num1, double num2)
{
    return (num1 + num2) * (num1 + num2);
}

    int main()
    {
        double num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "The average of the two numbers is: " << Ave(num1, num2) << endl;
        cout << "The sum of the squares of the two numbers is: " << SumSqr(num1, num2) << endl;
        cout << "The square of the sum of the two numbers is: " << SqrSum(num1, num2) << endl;
        return 0;
    }
