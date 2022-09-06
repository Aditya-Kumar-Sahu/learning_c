// Program for selection sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

// A utility function to print array
void printArray(int arr[], int n)
{
	int i;
    printf("[");
	for (i = 0; i < n; i++)
        if(i==n-1)
            printf("%d]", arr[i]);
        else
		    printf("%d, ", arr[i]);
	printf("\n");
}

int main()
{
    int i, n;
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

    printf("Original array: ");
    printArray(arr, n);
	selectionSort(arr, n);
    printf("Sorted array:   ");
	printArray(arr, n);

	return 0;
}
