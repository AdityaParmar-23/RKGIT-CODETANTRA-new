//Write a C program to Search an element using Linear Search process

#include<stdio.h>
void main()
{
    int a[15],i,key,n,p=-1;
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
        
    }
    printf("Search key : ");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            
        p=i;
        break;
        }
    }
    if(p==-1)
    printf("Key %d is not found.\n",key);
    else
    printf("Key %d is found at position %d.\n",key,p);
    return 0;
}
