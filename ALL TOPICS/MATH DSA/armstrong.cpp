#include<iostream>
using namespace std;
   int isArmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes += (dig*dig*dig);

        n=n/10;
    }
    return sumOfCubes=copyN;
   }
int main(){
int n=153;

if(isArmstrong(n)){
    cout<<"yes its is the armstrong number\n";
}else{
    cout<<"its is not an armstrong number\n";
}
return 0;
}