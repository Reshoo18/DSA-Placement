#include<iostream>
using namespace std;
    int factorial(int n){
        int Fact=1;
     for(int i=1;i<=n;i++){
        Fact *= i;
     }
     return Fact;
    }
    int nCr(int n,int r){
        int n_factorial=factorial(n);
        int r_factorial=factorial(r);
        int nmr_factorial=factorial(n-r);

        return n_factorial/(r_factorial*nmr_factorial);
    }
int main(){
    int n=4; int r=2;
    cout<<nCr(n,r);
}