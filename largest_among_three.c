//Program to find greatest number among given three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){       //checks if a is greater than b
        if (a>c){       //checks if a is greater than c too
            printf("%d is the largest number.",a);
        }
        else{       //if c is greater than a and a is greater than b, then c is greatest
            printf("%d is the largest number.", c);
        }
    }
    else{
        if (b>c){       //checks if b is greater than c too
            printf("%d is the largest number.", b);
        }
        else{       //if c is greater than b and b is greater than a, then c is greatest
            printf("%d is the largest number.", c);
        }
    }
}