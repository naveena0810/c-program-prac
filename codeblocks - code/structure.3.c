#include<stdio.h>
struct std
{
    int r;
    char b[5];
    float mark;
};
int main()
{
    //int r,b,mark;
    struct std s;
    printf("enter the rollno,name,mark: ");
    scanf("%d %s %f",&s.r,&s.b,&s.mark);
    printf("%d %s %f",s.r,s.b,s.mark);
}
