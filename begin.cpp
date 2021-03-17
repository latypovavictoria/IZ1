#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "matrix.cpp"
int* print(int *matrix){
		
	int num_strok;
	int num_stolb;
	printf("Введите кол-во столбцов: ");
	scanf("%d", &num_stolb);
	printf("\nВведите кол-во строк: ");
	scanf("%d", &num_strok);
	int num_of_elements = num_stolb * num_strok;
	matrix = (int*)malloc(sizeof(int) * num_of_elements);
	for (int i = 0; i < num_strok; i++)
	{
		printf("\n\nВведите %d строку матрицы: ", i + 1);
		for (int j = 0; j < num_stolb; j++)
			scanf("%d", &matrix[(num_stolb)*i + j]);
	}
	matrix = calculate_matrix(matrix, num_strok, num_stolb);
	printf("\n\nВаша матрица:\n\n");
	for (int i = 0; i < num_of_elements; i++)
	{
		printf("%d ", matrix[i]);
		if (!((i + 1) % num_strok))
			printf("\n");
	}
	return matrix;
	free(matrix);
}

