#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int> nums,int n){  
    vector<int> ans(nums.size(),1);
    
    // prefix
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    // suffix
    int suffix = 1;
    for(int i=n-1;i>=0;i--){
        ans[i] *= suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();

    vector<int> ans = productArray(nums,n);

    // print result
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
