/*
Program to print table of n numbers using nested loops
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter height of the pyramid: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)          // loop for number of tables
    {
        printf("Table of %d is: ", i);
        for(j=1; j<=10; j++)    // loop to print table
        {
            printf("%d ", i*j);
        }
        printf("\n");
    }
    return 0;
}