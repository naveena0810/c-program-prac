#include <stdio.h>
int swap(int a,int b);
int main()
{
    int a=10,b=25;
    swap(a,b);  
    printf("Inside main :\n a=%d b=%d\n",a,b);
  }
int swap(int x, int y)
{   
int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside Function:\n x=%d y=%d\n",x,y);

}
