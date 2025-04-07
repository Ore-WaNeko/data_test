#include <iostream>

using namespace std;

void printInitial(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printResult(int index) {
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {    
        cout << "Element not found in the array." << endl;
    }
}

int linearSearch(int arr[], int size, int target) {
    int ctr = 0;
    for (int i = 0; i < size; i++) {
        ctr++;
        if (arr[i] == target) {
            cout << "Number of searches: " << ctr << endl;
            return i;
        }
    } 
    cout << "Number of searches: " << ctr << endl;
    return -1;
}

int main() {
    int arr[10] = {7, 20, 32, 38, 48, 55, 64, 68, 79, 88};
    int size = 10;
    int target = 55;

    printInitial(arr, size);
    int result = linearSearch(arr, size, target);
    printResult(result);

    return 0;
}