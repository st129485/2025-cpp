#include<cstdio>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int B[MAX_SIZE] = { 0 };
    int C[MAX_SIZE] = { 0 };
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    while (i < n)
    {
        A[i] = i + 1;
        B[i] = i + 1;
        C[i] = i + 1;
        i++;
    }
    while (j < n)
    {
        if ((j >= a - 1) && (j <= b - 1))
        {
            B[j] = A[b - 1 - (j - (a - 1))];
            C[j] = B[j];
        }
        j++;
    }
    while (k < n)
    {
        if ((k >= c - 1) && (k <= d - 1))
        {
            C[k] = B[d - 1 - (k - (c - 1))];
        }
        k++;
    }
    while (m < n)
    {
        printf("%d ", C[m]);
        m++;
    }

    return 0;
}