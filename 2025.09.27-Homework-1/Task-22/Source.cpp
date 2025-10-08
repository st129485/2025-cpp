#include <cstdio>

int main(int argc, char** argv)
{
    long long int a = 0;
    long long int b = 0;
    long long int r = 0;

    scanf_s("%lld%lld", &a, &b);

    printf("%lld", (a % b + bool(b > 0) * b + bool(b < 0) * (~b + 1)) % (bool(b > 0) * b + bool(b < 0) * (~b + 1)));
    return 0;
}