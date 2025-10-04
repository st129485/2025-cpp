#include<cstdio>

int main(int argc, char** argv)
{
	int N = 0;
	int A = 0;
	int B = 0;

	scanf_s("%d", &N);
	scanf_s("%d", &A);
	scanf_s("%d", &B);

	printf("%d", 2 * N * A * B);

	return 0;
}