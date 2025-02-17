#include<iostream>
using namespace std;
     double divide (int a = 10, double b = 2) {
        return a/b;
        }

    int main () {
    int a, b;

        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

            cout << divide() << endl;
            cout << divide(14) << endl;
            cout << divide(10,3) << endl;
            cout << divide(a,b) << endl;

            return 0;
        }

