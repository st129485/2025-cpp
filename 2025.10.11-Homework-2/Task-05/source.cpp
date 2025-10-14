#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf_s("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
    {
        printf("%d", 0);
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        if (c == 1)
        {
            printf("y");
        }
        else if (c == -1)
        {
            printf("-y");
        }
        else
        {
            printf("%dy", c);
        }
    }
    else if (a == 0 && b != 0 && c == 0)
    {
        if (b == 1)
        {
            printf("x");
        }
        else if (b == -1)
        {
            printf("-x");
        }
        else
        {
            printf("%dx", b);
        }
    }
    else if (a != 0 && b == 0 && c == 0)
    {
        printf("%d", a);
    }
    else if (a != 0 && b == 0 && c != 0)
    {
        if (c == 1)
        {
            printf("%d+y", a);
        }
        else if (c == -1)
        {
            printf("%d-y", a);
        }
        else if (c < 0)
        {
            printf("%d-%dy", a, -c);
        }
        else
        {
            printf("%d+%dy", a, c);
        }
    }
    else if (a != 0 && b != 0 && c == 0)
    {
        if (b == 1)
        {
            printf("%d+x", a);
        }
        else if (b == -1)
        {
            printf("%d-x", a);
        }
        else if (b < 0)
        {
            printf("%d-%dx", a, -b);
        }
        else
        {
            printf("%d+%dx", a, b);
        }
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        if (c < 0)
        {
            if (b != -1 && b != 1 && c == -1)
            {
                printf("%dx-y", b);
            }
            else if (b == -1 && c != -1)
            {
                printf("-x-%dy", -c);
            }
            else if (b == 1 && c != -1)
            {
                printf("x-%dy", -c);
            }
            else if (b == 1 && c == -1)
            {
                printf("x-y");
            }
            else if (b == -1 && c == -1)
            {
                printf("-x-y");
            }
            else
            {
                printf("%dx-%dy", b, -c);
            }
        }
        else
        {
            if (b != -1 && b != 1 && c == 1)
            {
                printf("%dx+y", b);
            }
            else if (b == -1 && c != 1)
            {
                printf("-x+%dy", c);
            }
            else if (b == 1 && c != 1)
            {
                printf("x+%dy", c);
            }
            else if (b == 1 && c == 1)
            {
                printf("x+y");
            }
            else if (b == -1 && c == 1)
            {
                printf("-x+y");
            }
            else
            {
                printf("%dx+%dy", b, c);
            }
        }
    }
    else
    {
        if (b < 0)
        {
            if (c < 0)
            {
                if (b != -1 && c == -1)
                {
                    printf("%d-%dx-y", a, -b);
                }
                else if (b == -1 && c != -1)
                {
                    printf("%d-x-%dy", a, -c);
                }
                else if (b == -1 && c == -1)
                {
                    printf("%d-x-y", a);
                }
                else
                {
                    printf("%d-%dx-%dy", a, -b, -c);
                }
            }
            else
            {
                if (b != -1 && c == 1)
                {
                    printf("%d-%dx+y", a, -b);
                }
                else if (b == -1 && c != 1)
                {
                    printf("%d-x+%dy", a, c);
                }
                else if (b == -1 && c == 1)
                {
                    printf("%d-x+y", a);
                }
                else
                {
                    printf("%d-%dx+%dy", a, -b, c);
                }
            }
        }
        else
        {
            if (c < 0)
            {
                if (b != 1 && c == -1)
                {
                    printf("%d+%dx-y", a, b);
                }
                else if (b == 1 && c != -1)
                {
                    printf("%d+x-%dy", a, -c);
                }
                else if (b == 1 && c == -1)
                {
                    printf("%d+x-y", a);
                }
                else
                {
                    printf("%d+%dx-%dy", a, b, -c);
                }
            }
            else
            {
                if (b != 1 && c == 1)
                {
                    printf("%d+%dx+y", a, b);
                }
                else if (b == 1 && c != 1)
                {
                    printf("%d+x+%dy", a, c);
                }
                else if (b == 1 && c == 1)
                {
                    printf("%d+x+y", a);
                }
                else
                {
                    printf("%d+%dx+%dy", a, b, c);
                }
            }
        }
    }

    return 0;
}