#include <stdio.h>
#include <stdlib.h>


int nhapMaTran(int*** matrix, int* row, int* column)
{
    char buffer[100];

    //Cap bo nho o day co dung khong??
    *matrix = (int**)malloc(*row*sizeof(int**));
    for (int i = 0; i < *row; i++)
    {
        (*matrix)[i] = (int*)malloc(*row*sizeof(int*));
    }

    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *column; j++)
        {
            printf("Nhap vao matrix[%d][%d] = ", i, j);
            scanf("%s", buffer);
            (*matrix)[i][j] = (int) strtol(buffer, NULL, 10);
        }
    }
}

int main() {
    char buffer[10];
    int row = 0;
    int column = 0;
    int** matrix = NULL;

    FILE *file;

    file = fopen("matrix.txt", "w");

    if (file == NULL)
    {
        printf("error!");
        exit(1);
    }

    printf("Enter number of row : ");
    scanf("%s", buffer);
    row = (int) strtol(buffer, NULL, 10);
    fprintf(file,"%d ", row);

    printf("Enter number of row : ");
    scanf("%s", buffer);
    column = (int) strtol(buffer, NULL, 10);
    fprintf(file,"%d\n", column);

    nhapMaTran(&matrix, &row, &column);
    return 0;
}