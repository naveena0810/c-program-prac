#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float mark;
}s={32,"naveena",80};
int main()
{
    struct student;
    printf("%d %s %f",s.rollno,s.name,s.mark);
}
