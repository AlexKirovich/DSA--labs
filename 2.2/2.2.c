#include <stdio.h>

int main()
{
int n = 7;
	int matrix[7][7]={
			{1, 2, 3, 4, 5, 6, 1},
			{1, 2, 3, 4, 5, 2, 7},
			{1, 2, 3, 4, 3, 6, 7},
			{1, 2, 3, 4, 5, 6, 7},
			{1, 2, 5, 4, 5, 6, 7},
			{1, 6, 3, 4, 5, 6, 7},
			{7, 2, 3, 4, 5, 6, 7}};
	for (int i = 0; i < n; i++){
		for (int j = 0; j  < n; j++){
			printf("%i ",  matrix[i][j]);
		}
		printf("\n");
	} printf ("\n");

	int i, j;
	int T;
	int flag;
	for (i = 0; i < n-1; i++){
		flag = 1;
		for (j = i+1; j < n; j++){
			if (matrix[j][n-1-j] < matrix[i][n-1-i]){
				T = matrix[j][n-1-j];
				matrix[j][n-1-j] = matrix[i][n-1-i];
				matrix[i][n-1-i] = T;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}

	for (int i = 0; i < n; i++){
	    for (int j = 0; j  < n; j++){
	    	printf("%i ",  matrix[i][j]);
	    }
	    printf("\n");
	}
}
