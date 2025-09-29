#include<iostream>
#include<map>
using namespace std;
int main(){
map<string, int> m;
m["tv"]=100;
m["phone"]=50;
m["cell"]=25;
m["pen"]=15;
for(auto p :m){
   cout<<p.first <<" "<<p.second<<endl;
}
return 0;

}