#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int rows, cols;
    printf("Number of rows: ");
    scanf("%i", &rows);
    printf("Number of cols: ");
    scanf("%i", &cols);
    printf("Enter %i elements and X\n", rows*cols);

    double matrix[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
        scanf("%lf ", &matrix[i][j]);
    }
     
    double x;
    scanf("%lf", &x);
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%.1lf ", matrix[i][j]);
        }
        printf("\n");
    }; printf("\n");
    
    int right, pivot, left;
    for (int i = 0; i < rows; i++){
        left = 0; 
        right = cols;
        while (left < right){
            pivot = (left+right)/2;
            if (matrix[i][pivot] >= x){
                right = pivot;
            } 
            else if (matrix[i][pivot] < x){ 
                left = pivot+1;
            }
        }
        if (matrix[i][pivot] == x && pivot<=cols-1){
            printf("X: %.1lf\t  (%d;%d)", matrix[i][pivot], i, pivot); return 0;
        }
        else{
            pivot++;
            if (matrix[i][pivot] == x && pivot<=cols-1){
                printf("X: %.1lf\t  (%d;%d)", matrix[i][pivot], i, pivot); return 0;
            }
        }
        if (i == cols - 1){
            printf ("X is not there");
        }
    }
    return 0;
}

