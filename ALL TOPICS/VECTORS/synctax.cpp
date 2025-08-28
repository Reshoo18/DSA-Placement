#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec={2,4,6,8,10};
    // int n=vec.size();
    // for(int i :vec){
    //     cout<<i<<endl;
    // }

    vector<int>vec;
    int n=vec.size();
    cout<<"vector size before push :"<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(55);

    cout<<"size of vec after push- :"<<vec.size()<<endl;
    for(int i: vec){
        cout<<i;
    }
return 0;
}