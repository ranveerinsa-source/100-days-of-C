//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int w,x,j;
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	scanf("%d",&w);
	for (int i=w;i<x-1;i++) {
		a[i]=a[i+1];
	}
	for (int i=0;i<x-1;i++) {
		print
	int main() {    char str[100];    
	int i, j, count, repeated;    \
	scanf("%99s", str);   
	for(i=0; str[i]!='\0'; i++)    {       
	repeated=0;        
	for(j=0; j<i; j++)            if(str[i]==str[j]) { repeated=1; break; }        if(repeated==1) continue;        count=0;        for(j=0; str[j]!='\0'; j++)           
		if(str[i]==str[j]) count++;        printf("%c = %d\n", str[i], count);    }    return 0;
	
	imple logic: Compare characters from both ends up to half the string.
#include <stdio.h>
int main()
{
    char str[100];
    int i, len=0, flag=0;
    scanf("%99s", str);
    while(str[len]!='\0') len++;
    for(i=0; i<len/2; i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;