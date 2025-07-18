// make pattern 3 by adding a ' ' in pattern 2 print statement
#include<stdio.h>
int main(int argc, char *argv[])
{
	int r;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	for(int i=1;i<=r;i++)
	{
		for(int j=r-i;j>=1;j--) printf(" ");
		for(int j=1;j<=i;j++) printf("* ");
		printf("\n");
	}
	return 0;
}
