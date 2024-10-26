#include<stdio.h>
int main()
{
    int a=10,*ptr=&a;
    int **p;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d",**p);
}
