#include<stdio.h>
int main()
{
    int  i,j,m,n,k,l;
    printf("Enter the size of array1 ");
    scanf(" %d",&n);
    int a[n];

    printf("Enter the size of array2 ");
    scanf(" %d",&m);
    int b[m];

    printf("Enter array1 element  ");
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    printf("Enter array2 element  ");
    for(j=0;j<m;j++)
        scanf(" %d",&b[j]);
    
    i=0,j=0,k=0;
    int c[50];
        while(i<n&&j<m)
        {
        if(a[i]<b[j])
        {
           c[k]=a[i];
           i++;
           
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;
            j++;
            
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            
        }
        k++;
        }
   
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<m){ 
        
            c[k]=b[j];
            j++;
            k++;
        }
        l=k;
    printf("Union of array is ");
    for(k=0;k<l;k++){
        printf(" %d",c[k]);
    }
    return 0;

}
    