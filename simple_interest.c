//Program to find Simple Interest
#include <stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter Principal Amount: ");
    scanf("%f", &p);
    printf("Enter Rate of interest: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%f", &t);
    si=(p*r*t)/100;     //formula to calculate Simple Interest
    printf("Simple Interest is %f", si);
}