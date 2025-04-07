#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack <long int> A;
    A.push (20171140844);
    A.push (20121154856);
    A.push (20241133876);
    
    cout << "Number of students: " << A.size() << endl;
    cout << "Student numbers: " << endl;
    while (!A.empty()) {
        cout << A.top() << endl;
        A.pop();
    }
    cout << endl;
    return 0;
}