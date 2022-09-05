/*Program to find the frequency of given charactor in given string*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100],ch;
    int i, freq;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    freq=0;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i]==ch)
            freq++;
    }
    printf("Frequncy is: %d", freq);
    return 0;
}