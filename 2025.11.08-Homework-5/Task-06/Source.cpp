#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int arr_size = 0;
	long int num_grtr = 0;
	scanf("%d", &arr_size);
	long int* arr = (long int*)calloc(arr_size, sizeof(long int));
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		scanf("%ld", &arr[iter]);
	}
	for (long int iter = 1; iter < arr_size - 1; ++iter)
	{
		if ((arr[iter] > arr[iter - 1]) && (arr[iter] > arr[iter + 1]))
		{
			num_grtr += 1;
		}
	}
	printf("%ld", num_grtr);
	free(arr);
	return 0;
}