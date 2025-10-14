#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;

    scanf_s("%d", &n);

    if (n % 10 + n % 100 / 10 + n % 1000 / 100 == n % 10000 / 1000 + n % 100000 / 10000 + n % 1000000 / 100000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}