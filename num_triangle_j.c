/*Progarm to print desired triangle pattern using for loop
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter height of triangle: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
    printf("\n");
    }
    return 0;
}