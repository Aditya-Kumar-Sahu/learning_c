/*Program to find length of the string without using standard library functions*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int count=0;
    printf("Enter a string: ");
    scanf("%s", &str);
    while(str[count] != '\0')
    {
        count++;
    }
    printf("Length of given string is: %d", count);
    return 0;
}