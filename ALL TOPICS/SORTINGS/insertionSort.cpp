#include<iostream>
using namespace std;

int insertionSort(int arr[],int n){

    for(int i=1; i<n;i++){
         int curr=arr[i];
         int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
               arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=curr;
        }
    //     if(!isSwap){
    //     return ;   for optimization 
    // }
    }
    
 

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[]={2,1,7,4,3,9,0};
int n=sizeof(arr)/sizeof(int);
insertionSort(arr,n);
printArray(arr,n);
return 0;
}