#include <stdio.h> //gcc quiz.c -o quiz.exe

int main(int argc, char *argv[])
{
	double x = 1, sum = 0, size = 0;

	while (1)
	{
		size = x*x;
		sum+=size;
		printf("x의 길이가 %f 일 때 넓이의 차이는 %f - %f = %f \n", x, sum, sum-size, size);
		x=x/2;
		if(size<=0.000001)
			break;
	}

	printf("\n계산한 넓이의 합은 %f입니다.\n", sum - size);
	
	return 0;
}