#include<cstdio> //xxxxxxxxxxxxxxx
#include<cmath>

int main(int argc, char** argv)
{
	char x1 = '0';
	char y1 = '0';
	char x2 = '0';
	char y2 = '0';

	scanf_s("%c%c %c%c", &x1, &y1, &x2, &y2);

	if ((abs(x1 - x2) == abs(y1 - y2)) && ((x1 == x2) ^ (y1 == y2)))
	{
		printf("Queen");
	}
	else if (pow(x1 - x2, 2) + pow(y1 - y2, 2) <= 5)
	{
		printf("King");
	}
	else if (pow(x1 - x2, 2) + pow(y1 - y2, 2) == 5)
	{
		printf("Knight");
	}
	else if (abs(x1 - x2) == abs(y1 - y2))
	{
		printf("Bishop");
	}
	else if ((x1 == x2) && (abs(y1 - y2) == 1) || ((y1 == '2') && (abs(y2 - y1 == 2))))
	{
		printf("Rook");
	}
	else if ((x1 == x2) ^ (y1 == y2))
	{
		printf("Rook");
	}
	else
	{
		printf("Nobody");
	}

	return 0;
}