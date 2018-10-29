#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// chua link def cua libm.a vao thu vien math.h nen ko chay dc
int main() {
    float a, c, b, x1, x2, D;

    char buf1[10];
    char buf2[10];
    char buf3[10];

    printf("Nhap vao a, b, c: ");
    scanf("%s %s %s", buf1, buf2, buf3);

    a = strtof(buf1, NULL);
    b = strtof(buf2, NULL);
    c = strtof(buf3, NULL);

    D = b*b - 4*a*c;

    if (D < 0)
    {
        printf ("Phuong trinh vo nghiem.");
    }
    else
    {
        x1 = (-b - sqrt(D))/(2.0*a);
        x2 = -b/a - x1;
        printf("x1 = %4.1f\n x2 = %4.1f", x1, x2);
    }

    return 0;
}