#include "mylib2.h"
#include <stdio.h>
#include <stdlib.h>

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

float phanSo(char n[10], char k[10]){
    float kqua;
    kqua = strtof(n, NULL) / strtof(k, NULL);
    return kqua;

}