/*Program to copy a string in another string variable*/
#include <stdio.h>
int main()
{
    char str1[50], str2[50];
    int i;
    printf("Enter a string: ");
    scanf("%s", &str1);
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("Original String: %s", str1);
    printf("\n");
    printf("Copied String: %s",str2);
    return 0;
}