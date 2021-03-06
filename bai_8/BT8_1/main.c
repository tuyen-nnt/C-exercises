#include <stdio.h>
#include <stdlib.h>

void nhapMang(int*** a, int* size)
{
    char buffer[10] = {};
    *size = 0;

    while (*size <= 0)
    {
        printf("Nhap vao so hang va so cot N = ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }

    *a = (int**)malloc(*size*sizeof(int**));
    for (int i = 0; i < *size; i++)
    {
        (*a)[i] = (int*)malloc(*size*sizeof(int*));
    }

    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            printf("Nhap vao a[%d][%d] = ", i, j);
            scanf("%s", buffer);
            (*a)[i][j] = (int) strtol(buffer, NULL, 10);
        }
    }
}


int maPhuong(int*** array, int** size)
{
    int s = 0;
    int s1 = 0; //Khoi tao gia tri s dau de so sanh

    //Xet tong moi hang:
    for (int j = 0; j < **size; j++)
    {
        s1 += *array[0][j];
    }

    for (int i = 0; i < **size; i++)
    {
        for (int j = 0; j < **size; j++)
        {
            s += *array[i][j];
        }
        if (s != s1)
        {
            return 0;
        }
        s = 0;
    }

    //Xet tong moi cot
    for (int j = 0; j < **size; j++)
    {
        for (int i = 0; i < **size; i++)
        {
            s += *array[i][j];
        }

        if (s != s1)
        {
            return 0;
        }
        s = 0;
    }
    return s1;
}

// Xuat ra dong co tong lon nhat:
int lineMAX(int*** array, int** size)
{
    int sMAX = 0;
    int s = 0;
    int remember = 0;

    for (int i = 0; i < **size; i++)
    {
        for (int j = 0; j < **size; j++)
        {
            s += *array[i][j];
            if (s > sMAX)
            {
                sMAX = s;
                remember = i;
            }
        }
        s = 0;
    }
    return remember + 1;
}

//Xuat ra dong co tong nho nhat:
int lineMIN(int*** array, int** size)
{
    int sMIN = 0;
    int s = 0;
    int remember = 0;

    for (int j = 0; j < **size; j++)
    {
        sMIN += *array[0][j];
    }

    for (int i = 1; i < **size; i++)
    {
        for (int j = 0; j < **size; j++)
        {
            s += *array[i][j];
            if (s < sMIN)
            {
                sMIN = s;
                remember = i;
            }
        }
        s = 0;
    }

    return remember + 1;
}

//Tinh tong duong cheo chinh:
int crossmain(int*** array, int** size)
{

    int s1 = 0;

    for (int i = 0; i < **size; i++) {
        for (int j = 0; j < **size; j++) {
            if (i == j)
                s1 += *array[i][i];
        }
    }
    return s1;
}

//Tinh tong duong cheo phu:
int seccross(int*** array, int** size)
{
    int s2 = 0;

    for (int i = 0; i < **size; i++)
    {
        for (int j = 0; j < **size; j++)
        {
            if ((i + j) == (**size - 1))
                s2 += *array[i][j];
        }
    }
    return s2;
}

int main() {

    int** a = NULL;
    int size = 0;

    nhapMang(&a, &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int* size1 = &size;

    printf("Tong duong cheo chinh = %d\n", crossmain(&a, &size1));

    printf("Tong duong cheo phu = %d\n", seccross(&a, &size1));

    printf("Dong co tong lon nhat la dong thu %d.\n",lineMAX(&a, &size1));
    printf("Dong co tong nho nhat la dong thu %d.\n",lineMIN(&a, &size1));

    //So sanh gia tri s1 voi duong cheo (final step) de xet ma phuong
    maPhuong(&a, &size1);
    int k = maPhuong(&a, &size1);
    int cross1 = crossmain(&a, &size1);
    int cross2 = seccross(&a, &size1);

    if (k == 0)
    {
        printf("Ma tran khong phai la ma phuong.");
    }
    else
        if (k == cross1 && k == cross2)
        {
            printf("Ma tran la 1 ma phuong.");
        }

    return 0;
}
