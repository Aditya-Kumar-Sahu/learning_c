#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer: ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("Even");
    }
    else{
        printf("odd");
    }
}