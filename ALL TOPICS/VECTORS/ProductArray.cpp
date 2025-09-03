#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int> arr,int n){
    vector<int> ans(arr.size(),1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i] *= arr[j];
            }
        }
    }
    return ans;  // ✅ now function returns vector<int>
}

int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    
    vector<int> ans = productArray(arr,n);

    // print the vector
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
