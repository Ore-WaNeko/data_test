#include <iostream>
#include <string>
#include <stack>
using namespace std;

class SariSari {
public:
    string name;
    double price;
    double shelf_life;
    double pieces;
    double id;

    void setData(string n, double pi, double sl, double p, double i) {
        name = n;
        price = pi;
        shelf_life = sl;
        pieces = p;
        id = i;
    }

    void displayData() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Shelf Life: " << shelf_life << endl;
        cout << "Pieces: " << pieces << endl;
        cout << "ID: " << id << endl;
    }
};

void selectionSort(SariSari arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].shelf_life < arr[minIndex].shelf_life) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}


void printArray(SariSari arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i].displayData();
        cout << endl;
    }
}

int main() {
    SariSari pr[8];
    pr[0].setData("Mangoes", 20, 60, 100, 10245);
    pr[1].setData("Apple", 15, 35, 50, 20255);
    pr[2].setData("C2.Red", 30, 360, 200, 30356);
    pr[3].setData("Bukopie", 40, 120, 150, 12347);
    pr[4].setData("Magic.Sarap", 10, 520, 1000, 77878);
    pr[5].setData("C2.Green", 25, 360, 300, 10255);
    pr[6].setData("Boy.Bawang", 15, 400, 140, 12032);
    pr[7].setData("Banana", 7, 24, 30, 11234);

    int n = 8;

    cout << "Original array:" << endl;
    printArray(pr, n);

    selectionSort(pr, n);

    cout << "Sorted array by Shelf Life:" << endl;
    printArray(pr, n);
    
    string searchName;
    double searchId;
    cout << "Enter Product Name or ID to search: ";
    cin >> searchName;

    int isId = 1; 
    for (char c : searchName) {
        if (!isdigit(c)) {
            isId = 0; 
            break;
        }
    }

    if (isId == 1) {
        searchId = stod(searchName);
    }

    int found = 0; 
    for (int l = 0; l < n; l++) {
        if ((isId == 1 && pr[l].id == searchId) || (isId == 0 && pr[l].name == searchName)) {
            cout << "Product found:" << endl;
            pr[l].displayData();

            double quantity;
            cout << "How many would you like to buy? ";
            cin >> quantity;

            if (quantity > pr[l].pieces) {
                cout << "Insufficient Stock. Stock Available: " << pr[l].pieces << endl;
            } else {
                double totalPrice = pr[l].price * quantity;
                cout << "Total Price: " << totalPrice << endl;
            }
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Product not found." << endl;
    }

  stack<int> A;
A.push(10245);
A.push(20255);
A.push(30356);
A.push(12347);
A.push(77878);
A.push(10255);
A.push(12032);
A.push(11234);

cout << "Size of A: " << A.size() << endl;
cout << "Contents of A: " << endl;
while (!A.empty()) {
    cout << A.top() << endl;
    A.pop();
}
cout << endl;
    return 0;


}