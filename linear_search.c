/*Program for linear search an element in an array*/
#include <stdio.h>
int main()
{
    int i, n, element;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    //runtime array inputs
    for(i=0; i<n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    //linear search
    printf("Enter element you want to search: ");
    scanf("%d", &element);
    for(i=0; i<n; i++)
    {
        if(arr[i]==element)
        {
            printf("%d found at position %d", element, i);
            break;
        }
        if(i==(n-1))
            printf("Element is not present in array.");
    }
}