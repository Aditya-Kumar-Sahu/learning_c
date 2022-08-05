/*
Program to print given inverted pyramid pattern
* * * * * * * 
  * * * * * 
    * * * 
      *
*/

#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)             //number of rows
    {
        for(j=0; j<=2*i; j++)       //number of spaces
        {
            printf(" ");
        }
        for(k=0; k<=2*(n-i); k++)   //number of *
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}