#include<stdio.h>
void main()
{
    int i,temp=0;
    float arr[5];
    printf("please enter the value\n");
    for(i=0;i<5;++i)
    {
        scanf("%f",&arr[i]);
    }
    for(i=1;i<5;++i)
    {
        if(arr[temp]<arr[i]);
        temp=i;
    }
    printf("largest element=%.2f\n",arr[temp]);
    printf("index=%d",temp);
}