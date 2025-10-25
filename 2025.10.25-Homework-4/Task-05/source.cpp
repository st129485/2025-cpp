#include<cstdio>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int B[MAX_SIZE] = { 0 };
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    scanf_s("%d", &n);
    while (i < n)
    {
        scanf_s("%d", &A[i]);
        i++;
    }
    while (j < n)
    {
        B[n - j - 1] = A[j];
        j++;
    }
    while (k < n)
    {
        printf("%d ", B[k]);
        k++;
    }

    return 0;
}