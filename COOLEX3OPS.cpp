#include <iostream>
using namespace std;

class Jeanne{
    public:
    string name;
    string id;
    double calculus;
    double physics;
    double mmw;
    double electrical;
    double discrete;
    double average;
    
    double jeanneave(){
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
        jeanneave();
    }
    
    void displayStudent(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "calculus: " << calculus << endl;
        cout << "physics: " << physics << endl;
        cout << "mmw: " << mmw << endl;
        cout << "electrical: " << electrical << endl;
        cout << "discrete: " << discrete << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Jeanne student1, student2, student3;
    student1.setData("Jeanne", "20171140844", 79, 81, 85, 95, 76);
    student2.setData("Moses", "20121154856", 80, 76, 94, 85, 87);
    student3.setData("Arabella", "20241133876", 82, 73, 84, 98, 86);
 
    student1.displayStudent();


    return 0;
}