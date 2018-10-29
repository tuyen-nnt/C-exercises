#include <stdio.h>
#include <math.h>

//chua link def cua libm.a vao thu vien math.h nen ko chay dc
int main() {
    float a,c;
    double b,x1,x2,D;
    printf("Nhap vao a, b, c");
    scanf("%f %lf %f", &a, &b, &c);
    D = pow(b,2.0) - 4.0*a*c;
    if (D < 0)
        printf ("Phuong trinh vo nghiem.");
    else
    {
        x1 = (-b - sqrt(D))/(2.0*a);
        x2 = -b/a - x1;
        printf("x1 = %4.1lf\n x2 = %4.1lf",x1,x2);
    }
    return 0;
}