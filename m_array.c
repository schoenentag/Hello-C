#include <stdio.h>
int main_m_array(void) {
	// ������ �迭 Multidimensional Array
	int arr[2][5] = { {1,2,3,4,5 }, {6,7,8,9,10 }};

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			printf("2���� �迭 (%d, %d)�� �� : %d)\n", i,j, arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}