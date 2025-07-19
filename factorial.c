// method 1
/*#include<stdio.h>
int factorial(int num)
{
	if(num==0) return 1;
	else return num*factorial(num-1);
}
int main(int argc,char *argv)
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("factorial of %d is %d\n",num,factorial(num));
	return 0;
}*/

// method 2
#include<stdio.h>
int main(int argc, char *argv[])
{
	int num;
	printf("Number :");
	scanf("%d",&num);
	int factorial=1;
	if(num==0)
	{
		printf("0\n");
	}
	else
	{
		for(int i=1;i<=num;i++) factorial*=i;
	}
	printf("%d\n",factorial);
	return 0;
}
