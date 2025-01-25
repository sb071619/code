#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the a matrix elements		:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("a matrix elements are	:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%5d\t",a[i][j]);
		printf("\n");
	}
	printf("enter the b matrix elements		;\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("b matrix elements are	:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%5d\t",b[i][j]);
		printf("\n");
	}
	//code for addition of two matrices
	c[i][j]=a[i][j]+b[i][j];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%5d\t",c[i][j]);
		printf("\n");
	}
	printf("the resultant sum of two matrices c is	:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%5d\t",c[i][j]);
		printf("\n");
	}
	return 0;
}
