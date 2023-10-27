#include<stdio.h>
int main(){
    int a[10],n,i,j,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array element in a sorted way: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]){
                count++;
            }
            else{
                break;
            }
        }
    }
    
}