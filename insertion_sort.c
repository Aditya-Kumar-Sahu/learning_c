// Program for insertion sort
#include <stdio.h>

/* Function for insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
	insertionSort(arr, n);
    printf("Sorted array:   ");
	printArray(arr, n);

	return 0;
}
