#include<iostream>
#include<vector>
using namespace std;

int waterContainer(vector<int> arr,int n){
     int maxWater=0;
     int i=0; 
     int j=n-1;
     while(i<j){
        int w=(j-i);
        int ht=min(arr[i],arr[j]);
        int currWater=w*ht;
        maxWater=max(currWater,maxWater);
        arr[i]<arr[j]?i++:j--;
     }
return maxWater;
}

int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
int n=arr.size();
cout<<waterContainer(arr,n);
return 0;
}