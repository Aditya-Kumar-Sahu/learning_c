//Program to find if given integer is Odd or Even
#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer: ");
    scanf("%d",&a);
    if(a%2 == 0){       //checks if number is divisible by 2
        printf("Even");
    }
    else{
        printf("odd");
    }
}