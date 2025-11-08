#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int arr_size = 0;
	long int num_commonsgn = 0;
	scanf("%d", &arr_size);
	long int* arr = (long int*)calloc(arr_size, sizeof(long int));
	for (long int iter = 0; iter < arr_size; ++iter)
	{
		scanf("%ld", &arr[iter]);
	}
	for (long int iter = 1; iter < arr_size; ++iter)
	{
		if (((arr[iter] > 0) && (arr[iter - 1] > 0)) || ((arr[iter] < 0) && (arr[iter - 1] < 0)))
		{
			num_commonsgn += 1;
		}
	}
	if (num_commonsgn != 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	free(arr);
	return 0;
}