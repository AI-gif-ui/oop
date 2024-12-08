#include<iostream>
#include<string>
using namespace std;

//Constructor => Special method(function) invoked automatically at time of object creation. Used for Initialisation.

// Same name as a class
// Constructor doesn't have a return type
// Only Called once (automatically) , at object creation
// Memory allocation happens when constructor is called



//Types of Constructors
// 1) Non - Parameterized Constructor
// 2) Parameterized Constructor
// 3) Copy Constructor


// Constructor Overloading => Polymorphism


// 3) Copy Constructor => this is a special pointer in c++ that points to the current object  =>  this->prop is some as *(this).prop

// 3) Copy Constructor => Special Constructor (default) used to copy properties of one object into another.


//Shallow & Deep Copy

//1) A shallow copy of an object copies all of the member values from one object to another
//2) A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.



// class Teacher{
// private:
//    double salary;
// public:
//   string name;
//     string dept;
//     string subject1;

//   //non-parameterized constructor
//    Teacher(){
//       dept = "Computer Science";
//     }
    
//     //Parameterized Constructor
//     Teacher(string name,string dept,string subject1,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject1 = subject1;
//         this->salary = salary;
//     }

//     //copy constructor
//     Teacher(Teacher &orgObj){ //custom copy constructor
//         cout<<"I am custom copy construtor...";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject1 = orgObj.subject1;
//         this->salary = orgObj.salary;
//     }



    
    


//     //Methods / member Functions
//     void changeDept(string newDept){
//         dept = newDept;
//     }

//    void getInfo(){
//     cout<<"name: "<<name<<endl;
//     cout<<"subject: "<<subject1<<endl;
//    }
// };


class student{
public:
  string name;
  double* cgpaPtr;

  student(string name,double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaPtr<<endl;
  }

  student(student &obj){
    this->name = obj.name;
    this->cgpaPtr = obj.cgpaPtr;
  }
};

int main(){
    // Teacher t1; //Constructor call

    // t1.name = "Shradha";
    // t1.subject1 = "C++";
    // t1.setSalary(25000);

    // cout<<t1.dept<<endl;

    // cout<<t1.name<<endl;



    // Teacher t1("shradha","Computer Science","C++",25000);
    // // t1.getInfo();


    // // Teacher t2(t1); //default copy constructor -invoke

    // Teacher t2(t1); //custom copy constuctor
    // t2.getInfo();


    student s1("rahul kumar",8.9);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;

    s1.getInfo();
    s2.getInfo();

    return 0;
}

