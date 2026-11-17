#include <stdio.h>
 int main () {
 int i;
 float a,b,s;
 scanf("%d%d",&a,&b);
  s= (b-a)/(a);
  i=s*100;
  if(a==0){printf("invalid input");}
   if(s>0){ 
   printf("profit ");
   printf("%d%%",i);
   } 
    else if (s<0)
  { printf("loss ");
    printf("%d%%",-i);
	}
	else{ printf("no loss no profit");
	}  
	return 0;
	} 
	
	/*C:\Users\i3KCL\OneDrive\Desktop\git>gcc prog2_day11.c -o prog2_day11.out

C:\Users\i3KCL\OneDrive\Desktop\git> prog2_day11.out
200 100
loss 50%
C:\Users\i3KCL\OneDrive\Desktop\git> prog2_day11.out
100 100
no loss no profit */