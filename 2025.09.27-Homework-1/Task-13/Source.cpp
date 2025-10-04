#include<cstdio>

int main(int argc, char** argv)
{
    int k = 0;
    int n = 0;
    int p = 0;
    int l = 0;

    scanf_s("%d", &k);
    scanf_s("%d", &n);

    p = (n - 1) / k + 1;
    l = (n - 1) % k + 1;

    printf("%d %d", p, l);

    return 0;
}