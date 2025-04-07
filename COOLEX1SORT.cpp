#include <iostream>
using namespace std;

class GradeSheet {
public:
    string name;
    string id;
    double calculus;
    double physics;
    double mmw;
    double electrical;
    double discrete;
    double average;

    double computeAverage() {
        average = (calculus + physics + mmw + electrical + discrete) / 5;
        return average;
    }

    void setData(string n, string i, double c, double p, double m, double e, double d) {
        name = n;
        id = i;
        calculus = c;
        physics = p;
        mmw = m;
        electrical = e;
        discrete = d;
        computeAverage();
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Calculus: " << calculus << endl;
        cout << "Physics: " << physics << endl;
        cout << "MMW: " << mmw << endl;
        cout << "Electrical: " << electrical << endl;
        cout << "Discrete: " << discrete << endl;
        cout << "Average: " << average << endl;
    }
};

void insertionSort(GradeSheet arr[], int n) {
    for (int i = 1; i < n; i++) {
        GradeSheet key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].average < key.average) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    GradeSheet students[3];
    students[0].setData("Jeanne", "20171140844", 79, 81, 85, 95, 76);
    students[1].setData("Moses", "20121154856", 80, 76, 94, 85, 87);
    students[2].setData("Arabella", "20241133876", 82, 73, 84, 98, 86);

    int n = 3;
    insertionSort(students, n);

    for (int i = 0; i < n; i++) {
        students[i].displayInfo();
        cout << endl;
    }

    return 0;
}