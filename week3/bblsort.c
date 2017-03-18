#include<stdio.h>
void sort(int n,int a[])
{
	int temp=0,i,j;
        for (j=0;j<n-1;j++)
    {
		for(i=0;i<n-1-j;i++)
		{
			if (a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
        
        }	
     }
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
{   
    printf(" %d,",a[i]);
}
    printf("\n");
}
int main()
{	
	int n;
    int a[n];
	printf("enter how many numbers u want to sort\n");
	scanf("%d",&n);
	int k;
	printf("enter the elements u want to sort\n");
	for (k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}	
	
	sort(n,a);
	return 0;
}
