#include<iostream>
#include<string>
using namespace std;

//Hierarchial Inheritance

// from one parent multiple childs are inheriting the properties of the parent class

class Person{
public:
   string name;
   int age;
};

class Student : public Person{
public:
   int rollno;
};

class Teacher : public Person{
public:
  string subject;
}



int main(){
    TA t1;
    t1.name = "tony stark";
    t1.subject = "engineering";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}