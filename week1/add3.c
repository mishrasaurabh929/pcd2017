#include<stdio.h>
int add(int a,int b, int c)

{int d;
d=a+b+c;
 
return d;}

int main()

{
  int e,x,y,z;
printf("enter three numbers to add");


scanf("%d%d%d",&x,&y,&z);

e=add(x,y,z);
printf("the sum of three numbers are %d",e);
}
