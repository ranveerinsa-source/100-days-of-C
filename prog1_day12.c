#include <stdio.h>
 int main () { 
 int d,s;
 scanf("%d",&d);
 if(d<=5){
 s=2*d;
 printf("fine ");
   printf("%d",s);
   } 
   else if(d>5 && d<=10) {
    s= 10+(d-5)*4;
    printf("fine ");
	printf("%d",s);
	}
	else if (d>10 && d<30)
	{  s= 30+(d-10)*6;
	  printf("fine ");
	  printf("%d",s);
	  } 
	else if(d>=30) { printf("membership canceled");}
	return 0; 
	  }