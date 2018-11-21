#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[10][10], int* size) {
    int i, j;
    char buffer[10] = {};
    *size = 0;
    while (*size <= 0) {
        printf("Nhap vao so hang va so cot N = ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }

    for (i = 0; i < *size; i++) {
        for (j = 0; j < *size; j++) {
            printf("Nhap vao a[%d][%d] = ", i, j);
            scanf("%s", buffer);
            a[i][j] = (int) strtol(buffer, NULL, 10);
        }
    }

}
    //Dong co tong lon nhat:
int lineMAX(int array[10][10], int size)
{
    int sMAX = 0;
    int s = 0;
    int remember = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            s += array[i][j];
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

int lineMIN(int array[10][10], int size)
{
    int sMIN = 0;
    int s = 0;
    int remember = 0;

    for (int j = 0; j < size; j++)
    {
        sMIN += array[0][j];
    }

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            s += array[i][j];
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

int main() {

    int a[10][10] = {};
    int size;
    nhapMang(a, &size);

    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Tinh tong duong cheo chinh:

    int s1 = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                s1 += a[i][i];
        }
    }
    printf("Tong duong cheo chinh = %d\n", s1);

    //Tinh tong duong cheo phu:

    int s2 = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i + j) == (size - 1))
                s2 += a[i][j];
        }
    }
    printf("Tong duong cheo phu = %d\n", s2);

    printf("Dong co tong lon nhat la dong thu %d.\n",lineMAX(a, size));
    printf("Dong co tong nho nhat la dong thu %d.\n",lineMIN(a, size));

    return 0;
}
//
