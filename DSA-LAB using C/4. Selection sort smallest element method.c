//Write a C program to sort given elements using Selection sort smallest element method

#include<stdio.h>
int main()
{
    int a[20],i,n,j,p,min,temp,swap;
    printf("n = ");
    scanf("%d",&n);
    for(i-0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    
    }
    for(i=0;i<n;i++)
    {
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[p]>a[j])
            p=j;
        }
        if(p!=1)
        {
            swap=a[i];
            a[i]=a[p];
            a[p]=swap;
        }
    }
    printf("After sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
