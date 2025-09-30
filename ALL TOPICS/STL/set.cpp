#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);


for(int val: s){
    cout<<val<<" ";
}
cout<<endl;



return 0;
}