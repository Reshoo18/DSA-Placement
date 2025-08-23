#include<iostream>
using namespace std;
int main(){
int n=50;
// cout<<"enter the number ";
// cin>>n;
int sum=0;
for(int i=1; i<=n; i++){
if(i%2 != 0){
    sum += i;
}

}
cout<<"the sum of all the odd number "<<sum<<endl;
return 0;

}