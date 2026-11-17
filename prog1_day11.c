/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main () {
 int month;
 printf("enter month");
 scanf("%d",&month);
 switch(month){
 case 1: printf("jan ,31 days");
  break;
  case 2: printf("feb,28 days");
  break;
  case 3: printf("mar,31days"); 
 break;
  case 4: printf("apr,30days");
  break;
  case 5: printf("may,31days");
  break;
  case 6: printf("june,30days");
  break;
  case 7: printf("july,31days");
  break;
  case 8: printf("aug,31days");
  break;
  case 9: printf("sep,30days");
  break;
  case 10: printf("oct,31days");
  break;
  case 11: printf("nov,30days");
  break;
  case 12: printf("dec,31days");
  break;
  default: printf("invalid");
  }
  return 0;
  }
  
/*C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day11.out
enter month1
jan ,31 days
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day11.out
enter month12
dec,31days */