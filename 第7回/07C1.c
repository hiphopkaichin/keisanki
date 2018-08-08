#include <stdio.h>
#ifndef SIZE
#define SIZE 5
#endif

typedef struct
{
	double number[SIZE][SIZE];
}Matrix;

Matrix input_matrix(void)
{
	Matrix a;
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%lf",&a.number[i][j]);
		}
	}
	return a;
}

void output_matrix(Matrix a)
{
	int i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf(" %6.2lf",a.number[i][j]);
		}
		printf("\n");
	}
}

Matrix add_matrix(Matrix a,Matrix b)
{
	int i,j;
	Matrix c;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			c.number[i][j] = a.number[i][j] + b.number[i][j];
		}
	}
	return c;
}

Matrix subtract_matrix(Matrix a,Matrix b)
{
	int i,j;
	Matrix c;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			c.number[i][j] = a.number[i][j] - b.number[i][j];
		}
	}
	return c;
}
Matrix multiply_matrix(Matrix a,Matrix b)
{
	int i,j,k;
	Matrix c;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			c.number[i][j] = 0;
			for(k = 0; k < SIZE; k++){
				c.number[i][j] += a.number[i][k] * b.number[k][j];
			}
		}
	}
	return c;
}

int main (void)
{
    Matrix a = input_matrix();
    Matrix b = input_matrix();
    Matrix r;

    printf("Matrix A:\n");
    output_matrix(a);
    printf("\nMatrix B:\n");
    output_matrix(b);

    r = add_matrix(a, b);
    printf("\nMatrices added:\n");
    output_matrix(r);

    printf("\nMatrices subtracted:\n");
    output_matrix(subtract_matrix(a, b));

    r = multiply_matrix(a, b);
    printf("\nMatrices multiplied:\n");
    output_matrix(r);

    return 0;
}
