#include<iostream>
using namespace std;
int main(){
int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int rows=4;
int cols=4;

int target=11;
for(int i=0;i<rows;i++){
    for(int j=0; j<cols; j++){
        if(matrix[i][j]==target){
            cout<<target;
        }
    }

}
return 0;
}