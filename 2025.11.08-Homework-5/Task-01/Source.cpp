#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int arr_size = 0;
	scanf("%d", &arr_size);											// scanf is used in all tasks, because scanf_s isn't recognized by site
	long int* arr = (long int*)calloc(arr_size, sizeof(long int));
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		scanf("%ld", &arr[iter]);
	}
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		if (iter % 2 == 0)
		{
			printf("%ld ", arr[iter]);
		}
	}
	free(arr);
	return 0;
}