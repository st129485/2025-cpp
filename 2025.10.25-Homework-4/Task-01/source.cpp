#include<cstdio>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int n = 0;
    int x = 0;
    int s = 0;
    int i = 0;
    int j = 0;
    scanf_s("%d", &n);
    while (i < n)
    {
        scanf_s("%d", &A[i]);
        i++;
    }
    scanf_s("%d", &x);
    while (j < n)
    {
        if (A[j] == x)
        {
            s++;
        }
        j++;
    }
    printf("%d", s);

    return 0;
}