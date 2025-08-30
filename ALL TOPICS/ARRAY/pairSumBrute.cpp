#include<iostream>
using namespace std;

int pairSum(int n,int target,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                
            }

        }
        return target;
    }
}
int main(){
    int arr[]={2,7,11,15};
    int target=9;
 int n=sizeof(arr)/sizeof(int);
 cout<<pairSum(n,target,arr)<<endl;
 cout<<"{"<<arr[0]<<","<<arr[1]<<"}";
return 0;
}