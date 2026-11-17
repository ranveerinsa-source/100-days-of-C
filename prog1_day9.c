#include <stdio.h> 
#include <math.h>
 int main () 
 { 
  int a,b,c;
    float n ,r,R,d;
	scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    n= pow(d,1/2); 
	r= (-b+n)/(2*a) ;
	R= (-b-n)/(2*a);
	  if (r==R) { 
	  printf("roots are same and root is %f", r);
	  }
	  else if (r!=R) {
	  printf("roots are different and root is %f,%f",r,R);
	  }
	  else { printf ( "complex roots"); }
	  return 0; 
 }