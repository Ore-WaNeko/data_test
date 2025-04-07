#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    int ctr = 0;
    int ct = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                ctr++;
            }
        }
        if (minIndex != i) {
        swap(arr[i], arr[minIndex]);
        ct++;
        }
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
    vector<int> arr = {64, 25, 12, 22, 11};
    
    cout << "Original array: ";
    printArray(arr);
    
    selectionSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);
    
    return 0;
}