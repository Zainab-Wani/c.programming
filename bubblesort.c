#include<stdio.h>
int main()
{
    int number,i,j,temp;
    printf("\n enter the total number of elements:");
    scanf("%d",&number);
    printf("enter the array elemets:");
    int arr[number];
    for(i=0;i<number;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<number-1;i++)
    {
        for(j=0;j<number-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf(" list sort in ascending order\n");
    for(i=0;i<number;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

