#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
vector<int> nums={3,-4,5,4,-1,7,8};
int n=nums.size();
int maxSum=INT_MIN;
int currSum=0;
for(int i=0;i<n;i++){
    
    currSum+=nums[i];
    maxSum=max(currSum,maxSum);
     if(currSum<0){
        currSum=0;
     }
   }
   cout<<maxSum;
return 0;
}