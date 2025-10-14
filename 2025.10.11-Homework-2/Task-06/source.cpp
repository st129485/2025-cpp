#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
    float a = 0;
    float b = 0;
    float c = 0;

    scanf_s("%f", &a);
    scanf_s("%f", &b);
    scanf_s("%f", &c);
    
    if (a == 0 && b == 0 && c == 0)
    {
        printf("%d", -1);
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("%d", 0);
    }
    else if (a == 0 && b != 0 && c == 0 || a != 0 && b == 0 && c == 0)
    {
        printf("%d\n", 1);
        printf("%d", 0);
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        printf("%d\n", 1);
        printf("%f", -c / b);
    }
    else if (a != 0 && b == 0 && c != 0)
    {
        if (-c / a >= 0)
        {
            printf("%d\n", 2);
            printf("%f\n", -sqrt(-c / a));
            printf("%f", sqrt(-c / a));
        }
        else
        {
            printf("%d", 0);
        }
    }
    else if (a != 0 && b != 0 && c == 0)
    {
        printf("%d\n", 2);
        printf("%d\n", 0);
        printf("%f", -b / a);
    }
    else
    {
        float d = b * b - 4 * a * c;
        if (d < 0)
        {
            printf("%d", 0);
        }
        else if (d == 0)
        {
            printf("%d\n", 1);
            printf("%f", -b / (2 * a));
        }
        else
        {
            printf("%d\n", 2);
            printf("%f\n", (-b - sqrt(d)) / (2 * a));
            printf("%f", (-b + sqrt(d)) / (2 * a));
        }
    }
    return 0;
}