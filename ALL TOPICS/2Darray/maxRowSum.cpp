#include<iostream>
#include<climits>
using namespace std;


int getMaxRowSum(int mat[][3],int rows,int cols){
 int maxRowSum=INT_MIN;
 for(int i=0;i<rows;i++){
    int rowSum=0;
    for(int j=0;j<cols;j++){
       rowSum+=mat[i][j];
    }
    maxRowSum=max(maxRowSum,rowSum);
 }
 return maxRowSum;
}
int main(){
int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
int rows=3;
int cols=3;
cout<<getMaxRowSum(mat,rows,cols);
return 0;
}