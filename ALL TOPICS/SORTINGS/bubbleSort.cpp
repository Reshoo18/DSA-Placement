#include<iostream>
using namespace std;

int bubbleSort(int arr[],int n){

    for(int i=0; i<n;i++){
        bool isSwap =false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap =true;
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
bubbleSort(arr,n);
printArray(arr,n);
return 0;
}