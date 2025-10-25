#include<cstdio>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int n = 0;
    int max = 0;
    int min = 1001;
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    scanf_s("%d", &n);
    while (i < n)
    {
        scanf_s("%d", &A[i]);
        i++;
    }
    while (j < n)
    {
        if (A[j] > max)
        {
            max = A[j];
        }
        if (A[j] < min)
        {
            min = A[j];
        }
        j++;
    }
    while (k < n)
    {
        if (A[k] == max)
        {
            A[k] = min;
        }
        k++;
    }
    while (m < n)
    {
        printf("%d ",A[m]);
        m++;
    }

    return 0;
}