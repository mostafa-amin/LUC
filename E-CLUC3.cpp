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
    int fact(int);
    int result=0;
    int i;
    for (i=1; i<=7; i++) {
        result+=i/(fact(i));
    }
    cout<<result<<"\n";
}

int fact(int x)
    {
        int factorial=1;
        for(int i=1;i<=x;i++)
            {
                factorial*=i;
            }
        return factorial;
    
    
    
    }