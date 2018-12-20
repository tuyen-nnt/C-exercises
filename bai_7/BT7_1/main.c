#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>



// Input: con trỏ trỏ đến vùng nhớ lưu kích thước của mảng
// Output: con trỏ trỏ đến vùng nhớ lưu các phần tử của mảng
void nhapMang3(int** array, int* size)
{
    /*char A[MAX] = {};

    for (int i = 0; i < N; i++)
    {
        printf("Nhap vao lan luot cac phan tu thu %d : ",i);
        scanf("%s", A[i]);
    }
    for (int i = 0; i < N; i++)
        a[i] = strtol(A[i], NULL, 10);
    */

    *size = 0;

    // Vùng nhớ đệm lưu input người dùng nhập vào khi gọi hàm scanf()
    char buffer[100];

    while (*size <= 0)
    {
        printf("Nhap kich thuoc mang: ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }

    // Khởi tạo mảng với kích thước không cố định.
    // Hai cách sử dụng malloc() và calloc() là tương đương nhau
    //array.data = (int*)malloc(array.size*sizeof(int));
    *array = (int*)calloc(*size, sizeof(int));

    for (int i = 0; i < *size; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%s", buffer);
        (*array)[i] = (int) strtol(buffer, NULL, 10);
    }
}

int cauA (int** array, int* size) {
    int dem = 0;
    for (int i = 0; i < *size; i++) {
        if (*array[i] % 2 == 0)
            dem += 1;
    }
    return dem;
}

int cauB (int* array[], int *size){
    int dem = 0;
    for (int i = 0; i < *size; i++){
        if (array[i] < 0)
            dem += 1;
    }
    return dem;
}

int cauC(int* array[], int *size) {

    int dem = 0;

    for (int i = 0; i < *size; i++ ){
        for (int k = 2; k == trunc(sqrt(*array[i])); k++) {
            if ((*array[i] % k) == 0)
                dem += 1;}
    }

    return dem;
}



int main()
{

    int size1 = 0;
    int* a = NULL;
    nhapMang3(&a, &size1);


    for (int i = 0; i < size1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    printf("Co %d so chan trong mang", cauA(&a, &size1));
    printf("Co %d so am trong mang", cauB(&a, &size1));
    printf("Co %d so nguyen to trong mang", cauC(&a, &size1));


    return 0;
}