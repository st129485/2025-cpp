#include<cstdio>

int main(int argc, char** argv)
{
    int N = 0;

    scanf_s("%d", &N);

    N = N / 10 + 1 * bool(N % 10 != 0);

    printf("%d", N);

    return 0;
}