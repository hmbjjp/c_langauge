// method 1
/*#include<stdio.h>
int main(int argc,char *argv[])
{
	int num;
	int first=0,second=1,third;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Here are %d numbers in fibonacci series!\n\n",num);
	if(num>2)
	{
		printf("%d\n%d\n",first,second);

		for(int i=1;i<=num;i++)
		{
			third=first+second;
			printf("%d\n",third);
			first = second;
			second = third;
		}
	}
	else
	{
		printf("%d\n%d\n",first,second);
	}
	return 0;
}*/


// method 2
#include<stdio.h>
void cal_fib(int n,int prev2, int prev1)
{
	if(n>0)
	{
		int curr=prev1+prev2;
		printf("%d\n",curr);
		n--;
		cal_fib(n,prev1,curr);
	}
}
void print_fib(int n)
{
	if(n<1) printf("Not Possible\n");
	else if(n==1) printf("0\n");
	else if(n==2) printf("0\n1\n");
	else if(n>=3)
	{
		printf("0\n1\n");
		cal_fib(n-2,0,1);
	}
}
int main(int argc,char *argv[])
{
	int k;
	printf("k: ");
	scanf("%d",&k);
	print_fib(k);// first k terms of fibonacci series
	return 0;
}
