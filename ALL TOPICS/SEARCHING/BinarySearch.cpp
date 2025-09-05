#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int target){
    int st=0;
    int end=n-1;
      
      while(st<=end){
        int mid = st+(end-st)/2;   //PTIMAL APPROACH
        if(target>arr[mid]){
            st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
      }
      return -1;
}

int main(){
int arr[]={-1,0,3,4,5,9,12};
int n= sizeof(arr)/sizeof(int);
int target=12;
cout<<BinarySearch(arr,n,target);
return 0;
}