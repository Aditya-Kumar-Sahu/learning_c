/*
Program to print given inverted triangle of numbers using nested loops
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1  
*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the height: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)             // number of rows
    {
        for(j=1; j<=n-i+1; j++)       // number of columns per row
        {
            printf("%d ", j);       // print values as number of column
        }
        printf("\n");
    }
    return 0;
}