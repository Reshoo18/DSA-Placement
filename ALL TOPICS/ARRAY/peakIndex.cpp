#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){

    int st=1;
    int end=n-2;

    while(st<end){
        int mid=st+(end-st)/2;

        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
             st=mid+1;
        }else{
             end=mid-1;
        }
    }
   return -1;
}
int main(){
    int arr[]={0,3,8,9,5,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<peakIndex(arr,n);

return 0;
}