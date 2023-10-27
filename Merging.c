#include<stdio.h>

void main()
{
    int a[10],b[10],c[10],n1,n2,i,j,k;
    printf("Enter size of first and second arrays");
    scanf("%d%d",&n1,&n2);
    printf("Enter first sorted array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second sorted array");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }

    printf("First array is:\n");
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Second array is:\n");
    for(j=0;j<n2;j++)
    {
        printf("%d ",b[j]);
    }
    printf("\n");
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(n1<n2)
    {
        while(j<n2)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<n1)
        {
            c[k]=a[i];
            k++;
            i++;
        }
    }
    printf("Merged array is:\n");
    for(k=0;k<n1+n2;k++)
    {
        printf("%d ",c[k]);
    }
}
