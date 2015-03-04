/*Write a program to find the octal equivalent of the entered
number.*/

#include<stdio.h>

int main()
		{
			int oct_value=0;
			int j=0;
				if(number<=8)
					cout<<number<<"\n";
				else if(number>8) {
					while(number!=0) {
				rem =(number%8);
				number/=8;
				oct_value+=rem*(pow(10,j));
				j++;
		}
				cout<<oct_value<<"\n";
	}
}	