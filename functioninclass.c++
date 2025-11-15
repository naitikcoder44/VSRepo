#include <iostream>
using namespace std;

class Student {
public:
    double Cgpa;
    int roll;
    string name;

    Student() {   // Default constructor
    }

    Student(string name, int roll, double Cgpa) {  // Parameterized constructor
       this-> name = name;
        this-> roll = roll;
        this-> Cgpa =   Cgpa;
    }
    void print() {
    cout << name << "  " << Cgpa << " " << roll << endl;
}
};



int main() {
    Student s1("naitik", 77, 8.7); // object
    s1.print();

    Student s2;
    s2.name = "naitik";
   cin>> s2.Cgpa; 
    s2.roll = 77;

    s2.print();
Student s3(s1);
Student s4=s2;//you can change any values
     s3.print();
     s4.print();
    return 0;
}
