#include <stdio.h> //gcc quiz1.c -o quiz1.exe

int main(int argc, char *argv[])
{
	double x = 1, sum = 0, mul = 0;

	while (1)
	{
		mul = x * x;
		sum += mul;

		printf("x�� ���̰� %f �� �� ������ ���̴� %f - %f = %f \n", x, sum, sum - mul, mul);

		x = x / 2;

		if (mul < 0.000001)
			break;
	}

	printf("\n����� ������ ���� %f�Դϴ�.\n", sum - mul);
	
	return 0;
}