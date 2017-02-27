#include<stdio.h>
int main()
{

int i,sum=0,n;
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
sum=sum+a[i];
}
printf("the sum of the numbers are %d",sum);
return 0;
}
