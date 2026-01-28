#include<iostream>
#include<string>
using namespace std;

class Teacher {
    public:
      string name;
      string subj;
      string dept;
      double sal;

      void changeDept(string newDept){
        dept=newDept;
      }
};
int main(){
    Teacher t1;
    t1.name="reshoo";
    t1.subj="c++";
    t1.dept="cse";
    t1.sal=1000000.00;

    cout<<t1.name;

return 0;
}