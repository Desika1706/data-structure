#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,sum;
	printf("Enter First Matrix Valueof :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the Second Matrix Values: \n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
				c[i][j]=sum;
			
			}
			
		}
	}

	printf("Multiplication of two Matrices is: \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
	
	return 0;
}
