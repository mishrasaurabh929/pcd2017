#include<stdio.h>

struct complex
{
float real;
float imaginary;
};
struct complex getcomplex()
{ 
struct complex c;
printf("enter real and imaginary numbers\n");
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
void printcomplex(struct complex mycomplex)
{
printf("%f+i%f\n",mycomplex.real,mycomplex.imaginary);
}
int main()
{
struct complex a,b,c;
a=getcomplex();
b=getcomplex();
c=add(a,b);
printcomplex(c);
return 0;
}
