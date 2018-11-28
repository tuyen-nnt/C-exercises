#include <stdio.h>
#include <stdlib.h>

void nhapMaTran(int array[10][10], int nrow, int ncolumn)
{
    char buffer[10];

    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncolumn; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%s", buffer);
            array[i][j] = (int) strtol(buffer, NULL, 10);
        }
    }
        printf("\n\n");
}


int main()
{
    int m = 0, n = 0, k = 0;
    char buffer[10] = {};
    int a1[10][10] = {};
    int a2[10][10] = {};
    int c[10][10] = {};

    while (m <= 0 || n <= 0 || k <= 0)
    {
        printf("Nhap vao so hang ma tran 1, M = ");
        scanf("%s", buffer);
        m = (int) strtol(buffer, NULL, 10);

        printf("Nhap vao so cot ma tran 1 ( = so hang ma tran 2), N = ");
        scanf("%s", buffer);
        n = (int) strtol(buffer, NULL, 10);

        printf("Nhap vao so cot ma tran 2, K = ");
        scanf("%s", buffer);
        k = (int) strtol(buffer, NULL, 10);
    }

    //Nhap 2 ma tran:
    printf("\n");
    printf("Ma tran thu nhat: \n");
    nhapMaTran(a1, m, n);

    printf("Ma tran thu hai: \n");
    nhapMaTran(a2, n, k);

    // A[m*n] x B[n*p] = C[m*p] với c[i,j]= Tổng a[i,k]*b[k,j] với k chạy từ 1->n

    printf("Ma tran tich:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int x = 0; x < n; x++)
            {
                c[i][j] = a1[i][x] * a2[x][j];
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n\n");
    }

    //Trich ra nhung so xuat hien o ca 2 ma tran 1 va 2:

    printf("Nhung so xuat hien o ca 2 ma tran la : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < k; y++)
                {
                    if (a1[i][j] == a2[x][y])
                    {
                        printf("%d  ", a1[i][j]);
                    }
                }
            }
        }
    }

    return 0;
}