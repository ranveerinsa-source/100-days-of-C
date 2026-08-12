/*_Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
 int main ()
 { 
 int a,b;
 int sum,sub,mul,div;
 scanf("%d%d",&a,&b);
 sum=a+b;
 sub=a-b;
 mul=a*b;
 div=a/b;
 printf("sum=%d,sub=%d,mul=%d,div=%d",sum,sub,mul,div);
 return 0;
 }


/*C:\>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd

C:\Users\i3KCL\OneDrive\Desktop\c>gcc prog2_day1.c -o prog2_day.out

C:\Users\i3KCL\OneDrive\Desktop\c> prog2_day.out
11 12
sum=23,sub=-1,mul=132,div=o 

C:\Users\i3KCL\OneDrive\Desktop\c> prog2_day.out
10 5
sum=15,sub=5,mul=50,div=2
C:\Users\i3KCL\OneDrive\Desktop\c> prog2_day.out
50 2
sum=52,sub=48,mul=100,div=25 */