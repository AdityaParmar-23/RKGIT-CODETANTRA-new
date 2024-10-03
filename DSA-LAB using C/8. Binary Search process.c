//Write a C program to Search an element using Binary Search process

#include<stdio.h>
int search(int arr[], int size,int element)
{
    int high,low,mid;
    low = 0;
    high = size - 1;
    while(low<=high)
    {
        mid = (high + low)/2; 
        if(arr[mid] == element)
        {
            return mid;
        }
            if(arr[mid] < element)
            {
            low = mid+1;
            }
        else
        {
        high = mid-1;
        }
    }
 return -1;
    
}
int main()
{
    int arr[50],n,i,element,j,t; 
    printf("n = ");
    scanf("%d",&n); 
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }   
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
        printf("Search key = ");
        scanf("%d", &element);
        printf("After sorting :\n");
        for(i=0;i<n;i++)
        {
            printf("a[%d] = %d\n",i,arr[i]);
        }
        int size = n;
        int index = search(arr, size, element);
        if(index == -1)
        {
        printf("Key %d is not found in the array.\n",element);
        }
        else
        {
            printf("Key %d is found at position %d.\n",element, index);
        }
        return 0;
}       
