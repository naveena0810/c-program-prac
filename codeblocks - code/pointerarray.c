#include<stdio.h>
int main()
{
    int n=5;
    int arr[]={11,12,13,14,15};
    int*ptr;
    ptr=arr;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",&ptr[5]);
        ptr++;
    }
}
