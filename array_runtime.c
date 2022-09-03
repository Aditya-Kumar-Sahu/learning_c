/*Program to declare runtime array of sizs 10 and then display elements stored.*/
#include <stdio.h>
int main()
{
    int i, arr[10];
    //taking runtime inputs
    printf("Enter 10 elements of the array:-\n");
    for(i=0; i<10; i++)
    {
        printf("Element %d- ",i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    //displaying stored elements
    printf("Elements stored are:- ");
    printf("[");
    for(i=0; i<10; i++)
    {
        printf("%d",arr[i]);
        if(i!=9)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}