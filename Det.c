#include<stdio.h>
int main(){
    int a[3][3],i,j,DET;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the element of matrix at position a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    DET=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("Determinant of the matrix is %d",DET);
}