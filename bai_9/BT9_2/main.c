#include <stdio.h>
#include <stdlib.h>


void nhapMaTran(int*** matrix, FILE *file, int row, int column)
{
    char buffer[100];
    file = fopen("matrix.txt", "w");

    //Cap bo nho o day co dung khong??
    *matrix = (int**)malloc(row*sizeof(int**));
    for (int i = 0; i < row; i++)
    {
        (*matrix)[i] = (int*)malloc(row*sizeof(int*));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Nhap vao matrix[%d][%d] = ", i, j);
            scanf("%s", buffer);
            (*matrix)[i][j] = (int) strtol(buffer, NULL, 10);
            fprintf(file, "%d   ", (*matrix)[i][j]);
        }
    }
    fclose(file);
}

void sumMatrix(int*** matrix, FILE *file, int row, int column)
{
    int sum = 0;
    file = fopen("matrix.txt", "w");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum += (*matrix)[i][j];
        }
    }
//Xuat ra file nhung phan tu co gia tri bang tong cac ptu con lai:

    fprintf(file, "Nhung ptu = tong cac ptu con lai :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((*matrix)[i][j] == (sum - (*matrix)[i][j]))
                fprintf(file, "%d ", (*matrix)[i][j]);
        }
    }
    fclose(file);
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

    nhapMaTran(&matrix, file, row, column);

    /*for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            fprintf(file, "%d   ",(*matrix)[i][j])
        }
    }*/

    sumMatrix(&matrix, file, row, column);

    fclose(file);
    return 0;
}