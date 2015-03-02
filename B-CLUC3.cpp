//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another

#include <iostream>
#include<math.h>
using namespace std;


        
        int main( void )

            {
                int number, power,result=1;
                int i;
                cout<<"please enter the number \n";
                cin>>number;
                cout<<"Please Enter the power \n";
                cin>>power;
                
                for (i=1; i<=power; i++) {
                    result*=number;
                }
        
                cout<<result;
                cout<<"\n";
            }
