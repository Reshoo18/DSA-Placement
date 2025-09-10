#include<iostream>
using namespace std;
void mergeSort(int n,int m,int arr1[],int arr2[2]){
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr1[i] >= arr2[j]){
            arr1[idx--]=arr1[i--];
        }else{
            arr1[idx--]=arr2[j--];
        }
    }
    while(j>=0){
        arr1[idx--]=arr2[j--];
    }
    for(int i=0; i<m+n; i++){
        cout<<arr1[i];
    }
    cout<<endl;
}
int main(){
   int arr1[]={1,2,3,0,0,0,};
   int arr2[]={2,5,6};
   int m=3;
   int n=sizeof(arr2)/sizeof(int);
   mergeSort(n,m,arr1,arr2);
return 0;
}