#include<cstdio>

int main(int argc, char** argv)
{
    long long int n = 0;
    long long int m = 0;

    scanf_s("%lld", &n);
    scanf_s("%lld", &m);

    printf("%lld", n * m - (n + m - 1) + 1);

    return 0;
}