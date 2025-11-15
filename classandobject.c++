#include <iostream>
 using namespace std;

    class Student
    {
   public:
   int Cgpa;
   int roll;
   string name;
    };
     
    int main (){
        Student s1;
        s1.name="naitik";
        s1.Cgpa=5.2;
        s1.roll=77;
        cout<<s1.name<<"  "<<s1.Cgpa<<" "<<s1.roll<<endl;

        
    }
    