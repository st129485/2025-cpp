#include<cstdio>

int main(int argc, char** argv)
{
	int G = 0;
	int L = 0;

	scanf_s("%d", &G);
	scanf_s("%d", &L);

	printf("%d %d", L - 1, G - 1);

	return 0;
}