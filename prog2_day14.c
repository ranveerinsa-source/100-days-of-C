#include <stdio.h> 
int main () {
  int i,n,p;
  p=1;
   scanf("%d",&n);
   for(i=2;i<=n;i+=2){ 
    p=p*i;
} printf("%d",p);
	return 0;
	}