#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int ctr = 0;  // Track comparisons
    int ct = 0;        // Track swaps (shifts)

    int n = arr.size();
    for (int i = 1; i < n; i++) { // Start from the 2nd element
        int key = arr[i];
        int j = i - 1;

        // Count the first comparison before entering while loop
        while (j >= 0 && arr[j] > key) {
            ctr++;   // Each time we check arr[j] > key
            arr[j + 1] = arr[j]; // Shift element
            j--;
            ct++; // Each time we shift an element
        }

        // After exiting while, an additional comparison happened
        if (j >= 0) {
            ctr++;
        }

        arr[j + 1] = key; // Place key at correct position
    }

    cout << "Number of comparisons: " << ctr << endl;
    cout << "Number of swaps: " << ct << endl;
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};

    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
