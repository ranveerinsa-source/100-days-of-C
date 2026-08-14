/*Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
 int main ()
 { 
  int a,b;
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
   printf("a=%d,b=%d\n",a,b);
  return 0;
  }
 
 /*C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>prog1_day4.out
12 13
a=13,b=12 */




