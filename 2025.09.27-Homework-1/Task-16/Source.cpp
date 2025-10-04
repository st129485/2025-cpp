#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;

    scanf_s("%d", &n);

    n = n % 100 / 10;

    printf("%d", n);

    return 0;
}