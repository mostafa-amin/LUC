//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 *5)+(3*3*3)

#include <iostream>
#include<math.h>
using namespace std;


        
        int main( void )

            {
                int i;
                int temp,calc,x;
                for (i=1; i<=500; i++) {
                    temp=i;
                    calc=0;
                    while (temp!=0) {
                        x=temp%10;
                        calc+=x*x*x;
                        temp/=10;
                    }
                    if (i==calc) {
                        printf("the number %d is an Armstrong number",i);
                        printf("\n");
                    }
                }
   
            }
