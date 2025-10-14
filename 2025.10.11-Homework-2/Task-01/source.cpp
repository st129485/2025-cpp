#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
    char x1 = '0';
    char y1 = '0';
    char probel = '0';
    char x2 = '0';
    char y2 = '0';
    int n = 0;

    scanf_s("%c", &x1, 1);
    scanf_s("%c", &y1, 1);
    scanf_s("%c", &probel, 1);
    scanf_s("%c", &x2, 1);
    scanf_s("%c", &y2, 1);

    if ((abs(x1 - x2) == abs(y1 - y2)) || (x1 == x2) || (y1 == y2))
    {
        printf("Queen\n");
        n += 1;
    }
    if ((abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1))
    {
        printf("King\n");
        n += 1;
    }
    if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) == 5)
    {
        printf("Knight\n");
        n += 1;
    }
    if (abs(x1 - x2) == abs(y1 - y2))
    {
        printf("Bishop\n");
        n += 1;
    }
    if (((x1 == x2) && (y2 - y1 == 1) && (y1 != 49)) || ((x1 == x2) && (y1 == 50) && (y2 == 52)))
    {
        printf("Pawn\n");
        n += 1;
    }
    if ((x1 == x2) || (y1 == y2))
    {
        printf("Rook\n");
        n += 1;
    }
    if (n == 0)
    {
        printf("Nobody");
    }

    return 0;
}