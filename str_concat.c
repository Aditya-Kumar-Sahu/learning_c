/*Program to concatenate two given strings*/
#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int len, i;
    printf("Enter first string: ");
    scanf("%s", &s1);
    printf("Enter second string: ");
    scanf("%s", &s2);
    len=0;
    for(i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }
    for(i = 0; s2[i] != '\0'; i++, len++)
    {
        s1[len]=s2[i];
    }
    s1[len]='\0';
    printf("Concatenated string is: %s", s1);
    return 0;
}