/*Program to display elements stored in array in reverse order.*/
#include <stdio.h>
int main()
{
    int i, n;
    //size of array to be declered
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    //taking runtime inputs
    printf("Enter %d elements of the array:-\n", n);
    for(i=0; i<n; i++)
    {
        printf("Element %d- ",i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    //displaying stored elements in reverse order
    printf("Elements stored in reverse order are:- ");
    printf("[");
    for(i=(n-1); i>=0; i--)
    {
        printf("%d",arr[i]);
        if(i!=0)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}