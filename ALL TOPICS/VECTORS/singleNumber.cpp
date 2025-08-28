#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>nums={4,2,1,2,1};
int n=nums.size();
int ans=0;
for(int i:nums){
    ans=ans^i;
}
cout<<ans;
return 0;
}