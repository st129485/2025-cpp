#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;

    scanf_s("%d", &n);

    printf("%d", n / 10 + 1 * bool(n % 10 != 0));

    return 0;
}