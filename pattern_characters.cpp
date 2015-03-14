/*write a program to generate this pattern
 ABCDEFGFEDCBA
 ABCDEF FEDCBA
 ABCDE   EDCBA
 ABCD     DCBA
 ABC       CBA
 AB         BA
 A           A
 */
#include<stdio.h>
void  print_forward(int);
void  print_blanks(int);
void  print_reverse(int);
int main()
{
    int main_iterator=0;
    while(main_iterator<=6)
				{
                    if(main_iterator==0)
                    {
                        printf("ABCDEFGFEDCBA");
                    }
                    else
                    {
                        print_forward(7-main_iterator);
                        print_blanks(2*main_iterator-1);
                        print_reverse(main_iterator);
                    }
                    printf("\n");
                    main_iterator++;
                }
}
void print_forward(int x)
{
    int i;
    char c=65;
    for(i=1;i<=x;i++)
				{
                    printf("%c",c);
                    c++;
                    
                }
}
void print_reverse(int x)
{
    int i;
    char c=71-x;
    for(i=1;i<=7-x;i++)
				{	
                    printf("%c",c);
                    c--;
                }
}
void print_blanks(int x)
{
    int i;
    
				for(i=1;i<=x;i++)
                    printf(" ");
}