#include <stdio.h>
int main_m_array(void) {
	// 다차원 배열 Multidimensional Array
	int arr[2][5] = { {1,2,3,4,5 }, {6,7,8,9,10 }};

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			printf("2차원 배열 (%d, %d)의 값 : %d)\n", i,j, arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}