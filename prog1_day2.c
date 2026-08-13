/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main() 
{ 
   int x;
   x=2;
   int a,b;
   int area , perimeter;
   scanf("%d%d",&a,&b);
   area=a*b;
   perimeter=x*(a+b);
   printf ("area=%d,perimeter=%d",area,perimeter);
   return 0;
}
/*C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog1_day2.c -o prog1_day2.out

C:\Users\i3KCL\OneDrive\Desktop\git>prog1_day2.out
11 12
area=132,perimeter=46
C:\Users\i3KCL\OneDrive\Desktop\git>prog1_day2.out
2 4
area=8,perimeter=12
C:\Users\i3KCL\OneDrive\Desktop\git>prog1_day2.out
100 10000
area=1000000,perimeter=20200 */