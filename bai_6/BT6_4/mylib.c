#include <stdio.h>

int tinhDonGia(float n)
{  int d;
    if (n <= 100.0)
        d = 1242;
    else
    if ((n >= 101.0)&&(n <= 150.0))
        d = 1651;
    else
    if ((n >= 201.0)&&(n <= 300.0))
        d = 1788;
    else
    if ((n >= 301.0)&&(n <= 400.0))
        d = 1912;
    else d = 1962;
    return d;
}
int tinhTienDien(int dgia, float k)
{
    int t = k * dgia;
    return t;
}
void xuatKQ(int S)
{
    printf("So tien dien phai tra la = %d", S);
}
