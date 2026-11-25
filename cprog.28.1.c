///Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;  // assume prime
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
include <stdio.h>
int main()
{
    int a[100], n, i, j, count, repeated;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
        repeated=0;
        for(j=0; j<i; j++)
            if(a[i]==a[j]) { repeated=1; break; }
        if(repeated==1) continue;
        count=0;
        for(j=0; j<n; j++)
            if(a[i]==a[j]) count++;
        if(count>1) printf("%d ", a[i]);
    }
    return 0;