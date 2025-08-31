#include<iostream>
#include<vector>
using namespace std;
int buySell(vector<int> nums,int n){
    int bestBuy=nums[0];
    int maxProfit=0;
      for(int i=1; i<n; i++){
         if(nums[i]>bestBuy){
            maxProfit=max(maxProfit,nums[i]-bestBuy);
         }
         bestBuy=min(bestBuy,nums[i]);
      }
      return maxProfit;
}
int main(){
vector<int> nums={7,1,5,3,6,4};
int n= nums.size();
cout<<buySell(nums,n);
return 0;
}