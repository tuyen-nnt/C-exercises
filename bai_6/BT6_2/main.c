#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

float phanSo(char n[10], char k[10]){
    float kqua;
    kqua = strtof(n, NULL) / strtof(k, NULL);
    return kqua;

}
float tinhToan(char* toan,float a, float b)
{
    float kqua;
    switch(toan[0])
    {
        case '+':
            kqua = a + b; break;
        case '-':
            kqua = a - b; break;
        case '*':
            kqua = a*b; break;
        case '/':
            kqua = a/b; break;
        default:
            printf("Toan tu khong ton tai.");
    }
    return kqua;
}



int main() {
    char a[10] = {},b[10]= {},c[10] = {},d[10] = {};
    char *ptoan = (char*)malloc(10);
    memset(ptoan, 0, sizeof(ptoan));

    printf("Nhap vao a va b : ");
    scanf("%s %s", a, b);
    printf("\n");

    printf("Nhap vao c va d : ");
    scanf("%s %s", c, d);
    printf("\n");
    printf("Nhap vap phep toan : ");
    scanf("%s", ptoan);

    float ketQua = tinhToan(ptoan,phanSo(a,b),phanSo(c,d));
    printf("Ket qua cua phep toan = %.2f", ketQua);
    return 0;
}