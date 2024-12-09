#include<iostream>
#include<string>
using namespace std;

// dynamic allocation of memory => new (keyword used) => heap memory
// static memory allocation => by allocation memory by normal method  => stack memory

//Destructor => deletes the memory when object is destroyed(used) , this is done by default for static (stack) memory.

// for deleting in heap memory we have to use custom destructor 


class student{
public:
  string name;
  double* cgpaPtr;

  student(string name,double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

  //destructor 
  ~student(){
    cout<<"Hi , I delete everything\n"; 
    delete cgpaPtr; //memory leak
  }

  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaPtr<<endl;
  }

//   student(student &obj){
//     this->name = obj.name;
//     cgpaPtr = new double;
//     *cgpaPtr = *obj.cgpaPtr;
//     // this->cgpaPtr = obj.cgpaPtr;
//   }

  
};

int main(){

    student s1("rahul kumar",8.9);
    
    s1.getInfo();

    return 0;
}

