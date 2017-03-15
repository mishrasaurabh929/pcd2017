#include<stdio.h>
#include<math.h>
float squrt(float x)
	{ 
		float s;
		s=pow(x,0.5);
		return s;
	}
int main()
	{ 
		float n,p;
		printf("enter the number\n");
		scanf("%f",&n);
		p=squrt(n);
		
        printf("the square root of the number is %f",p);
        return 0;
	}
