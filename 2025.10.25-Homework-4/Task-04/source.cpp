#include<cstdio>
#include<cmath>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int n = 0;
    float x = 0;
    int dist = 2001;
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
    scanf_s("%f", &x);
    while (j < n)
    {
        if ((abs(x - A[j]) == dist) && (A[j] < min))
        {
            min = A[j];
        }
        if (abs(x - A[j]) < dist)
        {
            dist = abs(x - A[j]);
            min = A[j];
        }
        j++;
    }
    printf("%d", min);

    return 0;
}