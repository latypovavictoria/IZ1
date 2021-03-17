
#include "gtest/gtest.h"

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "begin.cpp"
TEST(calculate_matrix, calculate_matrix_first){
	//int r2=fib(6);
		int* matrix=print(matrix);
			int* matrix1;
	int num_strok1;
	int num_stolb1;
	printf("Введите кол-во столбцов: ");
	scanf("%d", &num_stolb1);
	printf("\nВведите кол-во строк: ");
	scanf("%d", &num_strok1);
	int num_of_elements1 = num_stolb1 * num_strok1;
	matrix1 = (int*)malloc(sizeof(int) * num_of_elements1);
	for (int i = 0; i < num_strok1; i++)
	{
		printf("\n\nВведите %d строку матрицы: ", i + 1);
		for (int j = 0; j < num_stolb1; j++)
			scanf("%d", &matrix1[(num_stolb1)*i + j]);
	}
	printf("\n\nВаша матрица:\n\n");
	for (int i = 0; i < num_of_elements1; i++)
	{
		printf("%d ", matrix[i]);
		if (!((i + 1) % num_strok1))
			printf("\n");
	}
	ASSERT_EQ(*matrix1, *matrix);
	free(matrix);
	free(matrix1);
	
}
int main(int argc,char** argv){
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}