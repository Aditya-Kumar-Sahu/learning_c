/*Program to print table of 2 using do while loop.*/
#include <stdio.h>
int main()
{
    int i=1;
    printf("Table of 2 is:-\n");
    do
    {
        printf("%d\n", i*2);
        i++;
    }
    while(i<=10);
    return 0;
}