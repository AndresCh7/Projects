#include <stdio.h>
#include <string.h>
#include <math.h> 

int plus(int i){
	i = i + 1;
	printf("i=%d\n", i);
	return i;
}

double sqr(double x){
	double res = x*x;
	return res;
}
const int size = 55;

void  circle(double r, double i0, double j0, char buffer[size][size + 2]){
	double alpha;
	for (alpha = 0; alpha < 6.29; alpha += 0.01)
	{
		int i = round(r*sin(alpha) + i0);
		int j = round(r*cos(alpha) + j0);
		if ((i >= 0) && (i<size) && (j >= 0) && (j<size))
		{
			buffer[i][j] = '*';
		}
	}
}


void inition(int i, char buffer[size][size + 2]) {
	for (i = 0; i < size; i++)
	{
		strcpy(buffer[i], "                                                       \n");
	}
}

void printing(int i, char buffer[size][size + 2]){
	for (i = 0; i < size; i++)
	{
		printf("%s", buffer[i]);
	} printf("\n");
}

int main() {
	const int N = 3, M = 4;
	int i, j, sum, sumall, count, c;
	float sumnochet;
	int sign = '***';
	int matrix[M][N] = { { 1, 2, 3 }, { 1, 7, 8 }, { 2, 4, 6 }, { 145, 15, 7 } };
	sumall =sumnochet=count= 0;
		for ( i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			sumall = sumall + matrix[i][j];
			printf("%4d", matrix[i][j]);
					}
		printf("\n");
	}printf("------------\n");
	
	for ( j= 0; j< N; j++)
	{		
		sum = 0;
		for (i = 0; i < M; i++)
		{
			sum = sum + matrix[i][j];
			}
		
			printf("%4d", sum); 
		}	
	printf("\n");
	printf("The sum of all matrix elements =%d", sumall);
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (matrix[i][j] % 2 != 0)
			{
				count++;
				sumnochet = sumnochet + matrix[i][j];
			}
		} 
	}
		printf("\n");
		printf("The mediasum of all matrix nochet elements =%3.1f", sumnochet/count);
		printf("\n");
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				c = j;
				if (matrix[i][j] % 2 == 0)
				{c++;
					printf(" \*\*\*");
										}
				if (c==j)
				{printf("%4d", matrix[i][j]);
								}
						}
			printf("\n");
		}
		
		const int size = 55;
		
		int r = 11, i0 = 15, i1 = i0 + 10, j0 = 12, j1 = j0 + 14, j2 = j1 + 14;
		char buffer[size][size + 2];
		inition(i, buffer);
		circle(r, i0, j0, buffer);
		circle(r, i0, j1, buffer);
		circle(r, i0, j2, buffer);
		circle(r, i1, j0+4, buffer);
		circle(r, i1, j1 +10, buffer);
		printing(i, buffer);
		return 0;

		int a = 2;
		i = 3;
		plus(a);
		plus(i);
		
	}