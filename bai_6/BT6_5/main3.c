#include <stdio.h>
#include <stdlib.h>
#include "mylib3.h"

int main3() {
    double a,b,c;
    char buf1[10];
    char buf2[10];
    char buf3[10];
    printf("Nhap vao a, b, c : ");
    scanf("%s %s %s", buf1, buf2, buf3);
    a = strtof(buf1, NULL);
    b = strtof(buf2, NULL);
    c = strtof(buf3, NULL);
    check(a,b,c);
    return 0;
}