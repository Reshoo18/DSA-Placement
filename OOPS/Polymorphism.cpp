#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;

    student(){
        cout<<"non-paramterized\n";
    }

    student(string name){
        this->name=name;
        cout<<"parameterized";
    }
};
int main(){
   student s1();

return 0;
}