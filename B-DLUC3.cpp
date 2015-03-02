//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.


#include <iostream>
#include<math.h>
using namespace std;


        
        int main( void )

            {
               unsigned short ascii=0;
                
                while (ascii<=256) {
                    printf("%d",ascii);
                    printf("\t");
                    printf("%c",ascii);
                    printf("\n");
                    ascii++;
                }
                
                
                
   
            }
