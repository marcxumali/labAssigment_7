#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* arr, int n)
{
	int i, j, k, temp, numOfSwaps = 0;

	for (i = 0, k = 1; i < n-1; i++, k++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				numOfSwaps++;
			}
		}
		printf("pass #%d = %d\n", k, numOfSwaps);
		numOfSwaps = 0;
	}
}

int main()
{
	int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int size = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, size);

    return 0;
}