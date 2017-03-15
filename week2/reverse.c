#include<stdio.h>
getrev(int n)
{
	int rev=0;
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
return rev;
}
int main()
{
	int a,b;
	printf("enter the integer\n");
	scanf("%d",&a);
	b=getrev(a);
	printf("the reverse of the integer is %d",b);
	return 0;
} 


	
