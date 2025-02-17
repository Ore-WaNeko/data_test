#include<iostream>
using namespace std;

void showKilometers();
void showInches();
void showFeet();
void showMenu();
int meters, choice;

    int main()
    {
        cout << "Enter a distance in meters: ";
        cin >> meters;
        showMenu();

    }

    void showKilometers()
    {
        cout << "The distance in kilometers is: " << meters * 0.001 << endl;
    }
    void showInches()
    {
        cout << "The distance in inches is: " << meters * 39.37 << endl;
    }
    void showFeet()
    {
        cout << "The distance in feet is: " << meters * 3.281 << endl;
    }
    void showMenu()
    {
        cout << "1. Convert to kilometers" << endl;
        cout << "2. Convert to inches" << endl;
        cout << "3. Convert to feet" << endl;
        cout << "4. Quit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            showKilometers();
        else if (choice == 2)
            showInches();
        else if (choice == 3)
            showFeet();
        else if (choice == 4)
            cout << "Bye!" << endl;
        else
            cout << "Invalid choice." << endl;
    }