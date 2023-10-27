#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n;
    printf("Enter row and column of matrix");
    scanf("%d %d",&m,&n);
    printf("Enter the element of matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display transpose of the matrix \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           printf("%d\t",a[j][i]);
        }printf("\n");
    }

}