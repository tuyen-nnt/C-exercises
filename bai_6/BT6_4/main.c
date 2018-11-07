#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main() {
    char buf1[10];
    char buf2[10];
    float x;
    int S;

    printf("Nhap vao chi so dien cu va moi(kWh) >= 0 : ");
    scanf("%s %s", buf1, buf2);
    x = strtof(buf2, NULL) - strtof(buf1, NULL);
    S = tinhTienDien(tinhDonGia(x), x);
    xuatKQ(S);
    return 0;
}