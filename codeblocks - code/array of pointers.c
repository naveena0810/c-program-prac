#include<stdio.h>
int main()
{
int arr1[]={6,2,3,4,5};
int arr2[]={3,2,4,6,8};
int arr3[]={1,3,5,7,9};
int *parr[3] = {arr1, arr2, arr3};
int i;
for(i = 0;i<3;i++)
printf("%d\t", parr[i]);
return 0;
}
