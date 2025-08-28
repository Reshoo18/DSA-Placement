#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    
    vector<int> nums={3,-4,5,4,-1,7,8};
    int maxSum=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for (int j=i; j<n; j++){
            curr_sum += nums[j];
            maxSum=max(curr_sum,maxSum);

        }
    }
    cout<<"the max sum of max subarray is "<<maxSum;
    

return 0;
}