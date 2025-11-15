#include <iostream>
using namespace std;

class Student {
public:
    double Cgpa;
    int roll;
    string name;

    Student() {   // Default constructor
    }

    Student(string s, int r, double c) {  // Parameterized constructor
        name = s;
        roll = r;
        Cgpa = c;
    }
};

void print(Student s) {
    cout << s.name << "  " << s.Cgpa << " " << s.roll << endl;
}

int main() {
    Student s1("naitik", 77, 8.7); // object
    print(s1);

    Student s2;
    s2.name = "naitik";
    s2.Cgpa = 5.22;
    s2.roll = 77;

    print(s2);
Student s3(s1);
Student s4=s2;//you can change any values
     print(s3);
      print(s4);
    return 0;
}
