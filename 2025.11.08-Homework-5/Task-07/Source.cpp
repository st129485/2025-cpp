#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int arr_size = 0;
	long int temp = 0;
	scanf("%d", &arr_size);
	long int* arr = (long int*)calloc(arr_size, sizeof(long int));
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		scanf("%ld", &arr[iter]);
	}
	for (long int iter = 0; iter < arr_size / 2; ++iter)
	{
		temp = (long int)arr[iter];
		arr[iter] = arr[arr_size - 1 - iter];
		arr[arr_size - 1 - iter] = temp;
	}
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		printf("%ld ", arr[iter]);
	}
	free(arr);
	return 0;
}