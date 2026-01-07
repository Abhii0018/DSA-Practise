#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    float marks;
      Student(string n, int a,  float m){
        name=n;
        age=a;
        marks=m;  
      }
};

void change(Student * s){
  s->name="Abhishek";
}

int main(){
    Student * s=new Student("John",56,85.5);
    // // s.name="John";
    // s.name="Abhi";   
    // // s.marks=85.5;
    // change(s);
    // cout<<s.name<<endl;

    
    // cout<<s.age<<endl;

    // ptr->age=23;
    // cout<<s.age<<endl;

    change(s);
    cout<<s->name<<endl;



}