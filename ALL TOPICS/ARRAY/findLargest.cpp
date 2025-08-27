#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[6]={5,15,21,1,-15,24};
int n=sizeof(arr)/sizeof(int);

int largest=INT_MIN;
for(int i=0;i<n;i++){
    largest=max(arr[i],largest);
}
cout<<largest<<endl;
return 0;
}