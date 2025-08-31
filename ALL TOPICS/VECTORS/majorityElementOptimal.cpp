#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums,int n){
    int freq=0;
    int ans=0;
    for(int i=0; i<n;i++){
        if(freq==0){
            ans=nums[i];
        }if(ans==nums[i]){
             freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
vector<int> nums={2,2,1,1,1,2,2};
int n=nums.size();
cout<<majorityElement(nums,n);
return 0;
}