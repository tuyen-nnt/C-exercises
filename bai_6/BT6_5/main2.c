
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "mylib2.h"


int main2() {
    char a[10] = {}, b[10] = {}, c[10] = {}, d[10] = {};
    char *ptoan = (char *) malloc(10);
    memset(ptoan, 0, sizeof(ptoan));

    printf("Nhap vao a va b : ");
    scanf("%s %s", a, b);
    printf("\n");

    printf("Nhap vao c va d : ");
    scanf("%s %s", c, d);
    printf("\n");
    printf("Nhap vao phep toan : ");
    scanf("%s", ptoan);

    float ketQua = tinhToan(ptoan, phanSo(a, b), phanSo(c, d));
    printf("Ket qua cua phep toan = %.2f\n", ketQua);
    return 0;
}






















