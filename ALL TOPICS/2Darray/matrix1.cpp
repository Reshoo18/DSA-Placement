#include<iostream>
using namespace std;
int main(){
int metrix[3][3];
int rows=3;
int cols=3;
//for input
for(int i=0; i<rows;i++){
    for(int j=0; j<cols; j++){
        cin>>metrix[i][j];
    }
}


for(int i=0; i<rows;i++){
    for(int j=0; j<cols; j++){
        cout<<metrix[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}