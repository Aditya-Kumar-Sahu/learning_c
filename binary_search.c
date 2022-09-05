/*Program to implement Binary Search*/
#include <stdio.h>

//binary search function
int binarySearch(int arr[], int low, int high, int x)
{
	while (low <= high) {
		int mid = (low + high)/ 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

int main(void)
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
    printf("Enter element you want to search: ");
    scanf("%d", &element);

	int result = binarySearch(arr, 0, n - 1, element);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",result);
	return 0;
}
