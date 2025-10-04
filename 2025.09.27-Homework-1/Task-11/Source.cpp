#include<cstdio>

int main(int argc, char** argv)
{
    long long int n = 0;

    scanf_s("%lld", &n);

    printf("%lld", (n % 2 + n) * (n % 2 + n) / 4);

    return 0;
}