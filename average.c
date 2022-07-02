//Program to find Average of Five marks
#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float avg;
    printf("Enter five marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    avg=(m1+m2+m3+m4+m5)/5;
    printf("Average of given five marks is %f", avg);
}