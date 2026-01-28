//COMPILE TIME POLYMORPHISM
// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;

//     student(){
//         cout<<"non-paramterized\n";
//     }

//     student(string name){
//         this->name=name;
//         cout<<"parameterized";
//     }
// };
// int main(){
//    student s1();

// return 0;
// }


//RUN TIME  POLYMORFISM
#include<iostream>
using namespace std;
class parent{
  public:
  void getInfo(){
    cout<<"parent class";
  }
};
class child :public parent{
 public:
 void getInfo(){
    cout<<"child class";
 }
};
int main(){
    child p1;
    p1.getInfo();
return 0;
}