/*
Program to print given pyramid pattern
      *
    * * * 
  * * * * *
* * * * * * *
*/
#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter height of the pyramid: ");
    scanf("%d", &n);
    for (i=0; i<=n; i++)            //number of rows, or, height of the pyramid
    {
        for(j=0; j<=2*(n-i); j++)   //number of white space columns
        {
            printf(" ");
        }
        for (k=0; k<((2*i)-1); k++) //number of *
        {
            printf("* ");
        }
        printf("\n");
    }
}