/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h> 
 int main ()
 {
 int hours ,sec , min ;
 int n;
 scanf("%d",&n);
 hours = n/3600;
 min = n%3600/60;
 sec=hours%60;
 printf("%d:%d:%d",hours,min,sec);
 return 0 ;
 }
 
 
 
C:\TDM-GCC-64>cd..

/*C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog2_day5.c -o prog2_day5.out

C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day5.out
7322
2:2:2
C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day5.out
3661
1:1:1 */