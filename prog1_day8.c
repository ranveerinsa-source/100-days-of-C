/* Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
 #include <stdio.h>
 int main () 
 { 
  char n ;
  scanf("%c",&n);
  if (n>= 'A' &&  n<= 'Z') {
  printf("Uppercase alphabet"); 
  }
 else  if (n>= 'a' && n<= 'z') {
  printf("lowercase alphabet");
  } 
 else   if ( n>= '0'&& n< '9') { 
  printf("Digit"); 
  } 
 else { 
 printf("Special character");
 } 
  return 0; 
  } 
  
/* C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd i3kcl

C:\Users\i3KCL>cd onedrive

C:\Users\i3KCL\OneDrive>cd desktop

C:\Users\i3KCL\OneDrive\Desktop>cd git

C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog1_day8.c -o prog1_day8.out

C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
1
Uppercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
A
Uppercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
a
Uppercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
a
Uppercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog1_day8.c -o prog1_day8.out

C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
a
lowercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
A
Uppercase alphabet
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
1
Digit
C:\Users\i3KCL\OneDrive\Desktop\git> prog1_day8.out
/
Special character */