#include<stdio.h>
int add(int a)
{
int sum;
sum=sum+a;
return sum;
}
int main()
{

int i,sum,n;
printf("enter how many numbers u want to add\n");
scanf("%d",&n);
int a[n];
printf("enter the numbers\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
sum=add(a[i]);
}
printf("the sum of the numbers are %d\n",sum);
return 0;
}
