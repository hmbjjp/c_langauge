#include<stdio.h>
int main(int argc, char *argv[])
{
	int r;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<i;j++) printf(" ");
		for(int j=r;j>=i;j--) printf("* ");
		printf("\n");
	}
	return 0;
}
