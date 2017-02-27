#include<stdio.h>
struct complex
	{
	float real;
	float imaginary;
	};
		struct complex getcomplex()
		{
		printf("enter the real and imaginary numbers\n");
		scanf("%f%f",&c.real,&c.imaginary);
		return c;
		}
			struct complex add(struct complex x,struct complex y)
			{
			struct complex c;
			c.real=x.real+y.real;
			c.imaginary=x.imaginary+y.imaginary;
			return c;
			}
				int main()
				{
				struct complex a,b,c
				a=getcomplex();
				b=getcomplex();
				c=(a,b)
				printcomplex(c);
				return 0;
				}
void printcomplex(struct complex my complex)
{
printf("%f+i%f",c.real,c.imaginary);
}
