#include<stdio.h>
int main()
{
    double a=10,b=20,c=30;
    double*ptr1=&a;
    double*ptr2=&b;
    double*ptr3;
    if(*ptr1>*ptr2)
        printf("\n a is greater");
    else
        printf("\n b is greater");
}
