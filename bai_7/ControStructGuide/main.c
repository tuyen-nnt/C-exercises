#include <stdio.h>
#include "mylib.h"
#define  MAX 100

struct IntArray
{
    int* data;   // Con trỏ trỏ tới vùng nhớ lưu các phần tử của mảng
    int size;    // Kích thước của mảng
};

struct IntArray nhapMang1()
{
    struct IntArray array;
    array.size = 0;  //truy xuất thành phần và gán 0 cho s

    // Vùng nhớ đệm lưu input người dùng nhập vào khi gọi hàm scanf()
    char buffer[100];

    while (array.size <= 0)
    {
        printf("Nhap kich thuoc mang: ");
        scanf("%s", buffer);
        array.size = (int) strtol(buffer, NULL, 10);
    }

    // Khởi tạo mảng với kích thước không cố định.
    // Hai cách sử dụng malloc() và calloc() để cấp phát bộ nh là tương đương nhau
    //array.data = (int*)malloc(array.size*sizeof(int));
    array.data = (int*)calloc(array.size, sizeof(int));

    for (int i = 0; i < array.size; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%s", buffer);
        array.data[i] = (int) strtol(buffer, NULL, 10);
    }
    return array;
}


// Input: con trỏ trỏ đến vùng nhớ lưu kích thước của mảng
// Output: con trỏ trỏ đến vùng nhớ lưu các phần tử của mảng
int* nhapMang2(int* size)
{
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
    int* array = (int*)calloc(*size, sizeof(int));

    for (int i = 0; i < *size; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%s", buffer);
        array[i] = (int) strtol(buffer, NULL, 10);
    }

    return array;
}

// Input: con trỏ trỏ đến vùng nhớ lưu kích thước của mảng
// Output: con trỏ trỏ đến vùng nhớ lưu các phần tử của mảng
void nhapMang3(int** array, int* size)
{
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

int main() {
    // Malloc và Calloc được gọi là các system call (là các hàm giúp
    // chương trình ứng dụng tương tác TRỰC TIẾP với hệ điều hành)
    /*int *size = (int*)malloc(sizeof(int));

    *size = 5;
    printf("%d", *size);*/

    int size1 = 0;
    int *pSize1 = &size1;
    int **ppSize1 = &pSize1;
    int ***pppSize1 = &ppSize1;

    printf("%u\n", &size1);
    printf("%u\n\n", pSize1);

    printf("%u\n", &pSize1);
    printf("%u\n\n", ppSize1);

    printf("%u\n", &ppSize1);
    printf("%u\n\n", pppSize1);

    return 0;
}

// Cách 1: Không sử dụng tham số
//struct IntArray array = nhapMang1();
//int* a = array.data;
//int size1 = array.size;

// Cách 2: Tham số hóa biến chứa kích thước m
//int size1 = 0;
//int* a = nhapMang2(&size1);

// Cách 3: Tham số hóa(set giá trị đầu) cả biến chứa mảng và biến chứa kích thước mảng
int size1 = 0;
int* a = NULL;
nhapMang3(&a, &size1);


for (int i = 0; i < size1; i++)
{
printf("%d ", a[i]);
}
printf("\n");


cauA(a, size1);
cauB(a, size1);
cauC(a, size1);


return 0;
}
