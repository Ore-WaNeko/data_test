#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << "    |" << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << "  -----" << endl;
    }

    return 0;
}

    

