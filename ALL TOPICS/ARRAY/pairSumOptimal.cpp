#include<iostream>
using namespace std;

int pairSum(int arr[],int n,int target){
int i=0;
int j=n-1;
   
  while (i<j){
  int pS=arr[i]+arr[j];
  if( pS>target){
   j--;
  }else if(pS<target){
    i++;
  }else{
    return target;
  }
}
  return -1;
  
}

int main(){
int arr[]={2,7,11,15};
int target=13;
int n=sizeof(arr)/sizeof(int);
cout<<pairSum(arr,n,target)<<endl;
cout<<arr[0]<<arr[1];
return 0;
}