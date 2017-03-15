#include<stdio.h>
void getmatrix(int m,int n,float a[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d][%d]th element\n",i,j);
			scanf("%f",&a[i][j]);
		}
	}
}
void showmatrix(int m,int n,float a[m][n])
{
    int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f\t",a[i][j]);
		}
    printf("\n");
	}
}
void mpymatrix(int m,int n,float a[m][n],float b[m][n],float c[m][n])
{
int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}
int main()
{
	int m,n;
	printf("enter the order of the matrix\n");
	scanf("%d%d",&m,&n);
    float a[m][n],b[m][n],c[m][n];
	printf("enter the elements of matrix a\n");
	getmatrix(m,n,a);
	printf("enter the elements of matrix b\n");
	getmatrix(m,n,b);
    mpymatrix(m,n,a,b,c);
	showmatrix(m,n,c);
    return 0;
    
   }
