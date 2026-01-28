#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
   Person(){

   }
   };
class Student : public Person{
    public:
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;

    }
};

int main(){
    Student s1;
    s1.name="reshoo";
    s1.age=22;
    s1.getInfo();
return 0;
}