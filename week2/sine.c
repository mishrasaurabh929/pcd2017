#include<stdio.h>
#include<math.h>
float calc(float z);
float convert(float x);
int main()
{
	float x,a,b;
	printf("enter the value of x ");
	scanf("%f",&x);
	a=convert(x);
	b=calc(a);
	printf("the value of f(%f)=%f",x,b);
	return 0;
}

float convert(float x)
{
	float rad;
	rad=(3.1415/180)*x;
	return rad;
}

float calc(float z)
{
	float term,prev,diff,sum;
	term=diff=sum=z;
	for(int i=3;diff>0.000001;i+=2)
	{
		prev=term;
		term=(-term*z*z)/(i*(i-1));
		diff=fabs(prev-term);
		sum=sum+term;
	}
	return sum;
}
