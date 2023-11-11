#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={};
    int i;
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    printf("The third student got:%d",arr[2]);
    return 0;
}

