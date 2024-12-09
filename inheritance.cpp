#include<iostream>
#include<string>
using namespace std;

//Inheritance

// Inheritance => When properties & member functions of base class are passed on to the derived class

// parent -> child

// class A (parent,base) => class B (child,derived)


// constructor call 1)parent class(base) ,then 2)child class(derived)
//destructor call 1)child class(derived) , then 2)parent class(base)  , for deallocation the memory 


// this is a single level inheritance
class Person{
public: 
   string name;
   int age;

   Person(string name,int age){
    this->name = name;
    this->age = age;
   }

  //  Person(){
  //   cout<<"parent constructor...\n";
  //  }
};

class Student : public Person{
    //name,age,rollno
public:
  int rollno;

  Student(string name,int age,int rollno) : Person(name,age){
    this->rollno = rollno;
  }

  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"roll no: "<<rollno<<endl;
  }
};

int main(){
    Student s1("rahul kumar",21,1234);

    // s1.name = "rahul kumar";
    // s1.age = 21;
    // s1.rollno = 1234;
    
    s1.getInfo();
    return 0;
}