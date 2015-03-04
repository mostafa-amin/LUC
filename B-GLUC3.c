/*Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered*/

#include<stdio.h>

int main()
	{
		int receive,
		int positive=0;
		int negative=0;
		int zeros=0;
		char option='y';
		 printf("Please enter numbers")
		 while(option!='n')
			{
				scanf("%d",&receive);
				if(receive>0)
					positive++;
				else if(receive<0)
					negative++
				else if(receive==0)	
					zeros++;
					
					printf("Do you want to continue Y/N ?")
					scanf("%d",&option);
			
			}
	
	
	
	}