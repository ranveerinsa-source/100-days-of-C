/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
   int main ()
{
  int  R;
   int  x;
   x=2;
   float area,cricumference;
    float c;
   c=3.14;
   scanf("%d",&R);
   area=c*(R*R);
   cricumference=x*c*R;
    printf("area=%f,cricumference=%f",area,cricumference);
    return 0;
}

/*:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day2.out
12
area=452.160004,cricumference=75.360001
C:\Users\i3KCL\OneDrive\Desktop\git>prog2_day2.out
10
area=314.000000,cricumference=62.800003 */