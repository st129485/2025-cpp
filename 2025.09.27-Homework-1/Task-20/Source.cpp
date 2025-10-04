#include<cstdio>

int main(int argc, char** argv)
{
    long long int N = 0;
    long long int K = 0;

    scanf_s("%lld", &N);
    scanf_s("%lld", &K);

    printf("%lld %lld %lld", K / N, K % N, (N - K % N) * bool(K % N != 0));

    return 0;
}