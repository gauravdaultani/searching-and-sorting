#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j]) // for descending order use a[min]<a[j]
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
     printf("The sorted elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}