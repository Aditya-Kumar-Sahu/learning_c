/*Program to find factorial of a number*/
#include <stdio.h>
int main()
{
    int i, n, fac=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("Factorial of %d is: %d", n, fac);
    return 0;
}