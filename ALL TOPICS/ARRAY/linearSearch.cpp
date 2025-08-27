#include<iostream>
using namespace std;
int linearSearch(int arr[],int sz,int target){
    
    
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={3,6,9,12,15,18,21};
    int sz=sizeof(arr)/sizeof(int);
    int target=15;
cout<<linearSearch(arr,sz,target);

return 0;
}