
#include <cstdlib>
int* calculate_matrix(int* matrix, int num_strok, int num_stolb)
{
	int num_of_elements = num_stolb * num_strok;//колво элементов матрицы
	int* new_matrix = (int*)malloc(sizeof(int) * num_of_elements);// новые значения
	for (int i = 0; i < num_of_elements; i++)
	{
		int z = 0;
		for (int k = 0; k < i; k++)				
				if (z = matrix[i] == matrix[k])	{			
					break;
			}
		if (z) continue;
		new_matrix[i] = matrix[i];
		int num_repeat = 1;
		for (int j = i + 1; j < num_of_elements; j++)
				if (matrix[i] == matrix[j])
			{	
				num_repeat++;
				new_matrix[j] = matrix[i] * num_repeat;
			}
			free(matrix);
	}
	return new_matrix; 
	free(matrix);
}