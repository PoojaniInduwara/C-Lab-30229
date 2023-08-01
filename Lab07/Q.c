#include <stdio.h>
#define ROWS 3
#define COLS 3
void display_matrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {printf("%d ", matrix[i][j]);}

        printf("\n");
    }
}

void cal_matrixSum(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {result[i][j] = matrix1[i][j] + matrix2[i][j];}
    }
}

int main()
{
    int matrix1[ROWS][COLS] =
    {
        {3, 2, 4},
        {2, 6, 3},
        {5, 8, 7}
    };

    int matrix2[ROWS][COLS] =
    {
        {1, 4, 6},
        {4, 3, 2},
        {5, 7, 8}
    };

    int matrixSum[ROWS][COLS];

    printf("Matrix 1 is\n");
    display_matrix(matrix1);

    printf("Matrix 2 is\n");
    display_matrix(matrix2);

    cal_matrixSum(matrix1, matrix2, matrixSum);

    printf("Matrix Sum is\n");
    display_matrix(matrixSum);

    return 0;
}

