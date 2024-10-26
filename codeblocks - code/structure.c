#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    float marks;
}s;
int main()
{
    struct student s={32,"Naveena",80};
    printf("%d %s %f",s.rollno,s.name,s.marks);
}
