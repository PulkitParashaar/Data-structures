#include<stdio.h>
int main(){
    int a[100][100][100],l1,u1,l2,u2,l3,u3;
    printf("Enter lower and upper bound of the array dimension 1: ");
    scanf("%d%d",&l1,&u1);
    printf("Enter lower and upper bound of the array dimension 2: ");
    scanf("%d%d",&l2,&u2);
    printf("Enter lower and upper bound of the array dimension 3: ");
    scanf("%d%d",&l3,&u3);
    int b=&a[0][0];
    printf("Base Address is %d\n",b);
    printf("n is %d\n",sizeof(int));
    int i,j,k;
    printf("Enter the index whose address is to be found out:");
    scanf("%d%d%d",&i,&j,&k);
    printf("Address of a[%d,%d,%d] in a[%d:%d,%d:%d,%d:%d] according to row major is %d\n",i,j,k,l1,u1,l2,u2,l3,u3,(b+(sizeof(int))*((i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3))));
}