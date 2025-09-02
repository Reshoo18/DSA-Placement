#include<iostream>
#include<vector>
using namespace std;

int waterContainer(vector<int> arr,int n){
       int maxWAter=0;
       for(int i =0; i<n;i++){
        for(int j=i+1;j<n;j++){
            int w=j-i;
            int ht=min(arr[i],arr[j]);
            int currWater=w*ht;

            maxWAter=max(currWater,maxWAter);
        }
       }
       return maxWAter;
}
int main(){
vector<int> arr={1,8,6,2,5,4,8,3,7};
int n=arr.size();
cout<<waterContainer(arr,n);
return 0;
}