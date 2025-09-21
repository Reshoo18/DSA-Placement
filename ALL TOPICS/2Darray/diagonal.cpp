#include<iostream>
using namespace std;

  int diagonalSum(int mat[4][4],int rows, int cols,int n){
    int sum=0;
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols; j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-1-i){
                sum+=mat[i][j];
            }
        }
    }
    return sum;
  }
int main(){
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int rows=4;
int cols=4;
int n=4;
cout<<diagonalSum(mat,rows,cols,n);
return 0;
}