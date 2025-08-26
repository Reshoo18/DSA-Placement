#include<iostream>
using namespace std;
  int sum =0;
int sumOfNumbers(int a,int b){
  sum = a+b;
  return sum;
}

int main(){
   cout<<sumOfNumbers(3,4)<<endl;
return 0;
}