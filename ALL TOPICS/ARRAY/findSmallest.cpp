#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[6]={5,15,22,1,-15,24};
int n=sizeof(arr)/sizeof(int);
int smallest= INT_MAX;

for(int i=0;i<n;i++){
    smallest=min(arr[i],smallest);
    }
    cout<<smallest<<endl;
    

return 0;
}