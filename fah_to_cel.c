//Program to convert Degree Fahrenheit temperature to Degree Celsius.
#include <stdio.h>
int main(){
    float f,c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c=(5*(f-32)/9);      //formula to convert fahrenheit to celsius
    printf("Temperature in Celsius is %f", c);
}