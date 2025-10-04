#include <cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    long long r = 0;

    scanf("%lld%lld", &a, &b);

    r = a % b;
    b = bool(b > 0) * b + bool(b < 0) * (~b + 1);

    r = (r + b) % b;

    printf("%lld", r);
    return 0;
}