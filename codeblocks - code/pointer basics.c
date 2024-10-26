#include<stdio.h>
int main()
{

    int a=20;
    int *ptr=&a;
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    *ptr=32;
    printf("%d\n",a);
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+6);
    printf("%d\n",*ptr+1);

}
