#include<stdio.h>
void main()
{
    int arr[100],i;
    int num,elements,found=0;
    printf("enter the number of elements in array");
    scanf("%d",&num);
    printf("enter the elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search");
    scanf("%d",&elements);
    for(i=0;i<100;i++)
    {
        if(arr[i]==elements)
        {
            printf("element found at the index=%d\n",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element not found in an array");
    }
}