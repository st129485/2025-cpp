#include<cstdio>
#define MAX_SIZE 1000

int main(int argc, char** argv)
{
    int A[MAX_SIZE] = { 0 };
    int n = 0;
    int l = 0;
    int r = 0;
    int max = -1001;
    int nomer = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    scanf_s("%d", &n);
    while (i < n)
    {
        scanf_s("%d", &A[i]);
        i++;
    }
    scanf_s("%d", &l);
    scanf_s("%d", &r);
    while (j < n)
    {
        while ((j >= l - 1) && (j <= r - 1))
        {
            k = l - 1;
            if (A[k] > max)
            {
                max = A[k];
                nomer = l;
            }
            l++;
            j++;
        }
        j++;
    }
    printf("%d %d", max, nomer);

    return 0;
}