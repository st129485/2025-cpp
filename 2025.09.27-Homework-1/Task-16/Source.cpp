#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;

    scanf_s("%d", &n);

    printf("%d", n % 100 / 10);

    return 0;
}