#include<cstdio>

int main(int argc, char** argv)
{
    long long int n = 0;
    long long int k = 0;

    scanf_s("%lld", &n);
    scanf_s("%lld", &k);

    printf("%lld %lld %lld", k / n, k % n, (n - k % n) * bool(k % n != 0));

    return 0;
}