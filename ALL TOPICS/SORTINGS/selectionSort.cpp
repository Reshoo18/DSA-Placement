#include<iostream>
using namespace std;

int selectionSort(int arr[],int n){

    for(int i=0; i<n-1;i++){
         int smallIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallIdx]){
                swap(arr[j],arr[smallIdx]);
                
            }
        }
    //     if(!isSwap){
    //     return ;   for optimization 
    // }
    }
    
 
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
selectionSort(arr,n);
printArray(arr,n);
return 0;
}