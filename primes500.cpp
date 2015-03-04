//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program to print all prime numbers from 1 to 300.

#include <iostream>
#include<math.h>
using namespace std;


int main()
{
    int i;
    int flag=0;
    int temp;
    int j;
    for (j=1; j<=500; j++) {
        temp=j;
    for(i=temp-1;i>=2;i--)
    {
        if((temp%i))
        {
            flag=1;
            continue;
        }
        else if((temp%i)==0)
        {
            flag=0;
            break;
        }
    }
    
    if (flag==1) {
        cout<<j<<"\n";

    }
    
    }
    
}