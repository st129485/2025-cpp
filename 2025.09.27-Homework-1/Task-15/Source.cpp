#include<cstdio>

int main(int argc, char** argv)
{
    long long int n = 0;

    scanf_s("%lld", &n);

    printf("%lld", n - (n / 10) * 10);

    return 0;
}