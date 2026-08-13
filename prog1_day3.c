/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
  int main ()
  {   
      int d;
	  d=32;
	  float a;
	  a=1.8;
	  int  c;
	  float   fahrenheit ;
	  scanf("%d",&c);
	  fahrenheit=(c*a)+d;
	  printf("fahrenheit=%.1f", fahrenheit);
      return 0 ;
  }	  
  
/*C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>prog1_day3.out
11
fahrenheit=51.8 */