/*
Program to print given inverted triangle of numbers using nested loops
1 1 1 1 1 
2 2 2 2
3 3 3 
4 4 
5 
*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the height: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)             // number of rows
    {
        for(j=0; j<=n-i; j++)        // print values as number of row
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}