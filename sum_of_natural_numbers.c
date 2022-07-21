/*Program to find sum of first n natural numbers.*/
#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural number is: ", n);
    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}