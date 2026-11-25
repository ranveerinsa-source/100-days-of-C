//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int x,j,l=-1;
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter the number of which uwant to find index: ");
	scanf("%d",&j);
	for (int w=0;w<x;w++) {
		if (a[w]==j) {
			l=w;
		}
	}
	if (l !=-1) {
		printf("found at %d",l);
	}
	else {
		printf("%d",l);
	}
	return 0;
}
#include <stdio.h>
int main()
{
    char str[200], word[100], longest[100];
    int i=0, j=0, k, max=0;
    scanf(" %199[^\n]", str);
    while(1)
    {
    }
        if(str[i]!=' ' && str[i]!='\0')
        {
            word[j]=str[i];
            j++;
        }
        else
        {
            if(j>max)
            {
            }
            j=0;
        }
                max=j;
                for(k=0; k<j; k++) longest[k]=word[k];
                longest[j]='\0';
        if(str[i]=='\0') break;
        i++;
    printf("Longest word = %s", longest);
    return 0;