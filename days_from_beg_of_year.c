/* program to find the number fo days from the beginnning of the year*/

#include<stdio.h>
void main()
{
	int date,month,year;
	printf("Enter the date: ");
	scanf("%d",&date);
	printf("Enter the month: ");
	scanf("%d",&month);
	printf("Enter the year: ");
	scanf("%d",&year);
	
	// check whether date is valid or not(optinal)

	int no_of_days=0;
	if(month!=1)
	{

		switch(month-1)
		{
			case 12:
				//december
				no_of_days+=31;
			case 11:
				//nov
				no_of_days+=30;
			case 10:
				//october
				no_of_days+=31;
			case 9:
				//september
				no_of_days+=30;
			case 8:
				//august
				no_of_days+=31;
			case 7:
				//july
				no_of_days+=31;
			case 6:
				//june
				no_of_days+=30;
			case 5:
				//may
				no_of_days+=31;
			case 4:
				//april
				no_of_days+=30;
			case 3:
				//march
				no_of_days+=31;
			case 2:
				// feb
				if((year%4==0&&year%100!=0)||year%400==0)
				{
					// leap year
					no_of_days+=29;
				}
				else
				{
					// non leap year
					no_of_days+=28;
				}
			case 1:
				// january
				no_of_days+=31;
				break;
		}
	}
	no_of_days+=date;
	printf("The number of days from the beginning of the year to the entered date is %d",no_of_days);
}