#include<iostream>
#include<string>
using namespace std;

//Multiple Inheritance

// It is the inheritance when a (child class) (inheritance the property) of (two parent class)

class Student{
public:
   string name;
   int rollno;
};

class Teacher{
public:
   string subject;
   double salary;
};

class TA : public Student, public Teacher{
public:
   string researchArea;
};



int main(){
    TA t1;
    t1.name = "tony stark";
    t1.subject = "engineering";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}