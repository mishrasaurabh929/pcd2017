#include<stdio.h>

int add(int a,int b)


{int c;

   c=a+b;
return c;}

int main()
{
int d,x,y;

printf("enter the two numbers\n");

scanf("%d%d",&x,&y);

d=add(x,y);

printf("the sum of two numbers %d \n",d);
}



