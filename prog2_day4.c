/*Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
 int main ()
 { 
 int n;
 int sum,mul,div;
 printf("enter natural number;");
 scanf("%d",&n);
 sum=n*(n+1)/2;
 printf("sum=%d",sum);
 return 0 ;
 }
 
/*C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog2_day4.c -o prog2_day4.out

C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day4.out
enter natural number;5
sum=15
C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day4.out
enter natural number;10
sum=55 */