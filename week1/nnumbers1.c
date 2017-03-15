#include<stdio.h>
int add(int a)
{
int sum;
sum=sum+a;
return sum;
}

int main()
{
int a,i,sum
printf("enter how many numbers you want to add\n");
int n;
int a[n];
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
sum=add(a[i])
}
printf("the sum of the numbers are %d\n",&sum);
return 0;
}
