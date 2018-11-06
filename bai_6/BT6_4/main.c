#include <stdio.h>
#include <stdlib.h>

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
int main() {
    char buf1[10];
    char buf2[10];
    float x;
    
    printf("Nhap vao chi so dien cu va moi(kWh) >= 0 : ");
    scanf("%s %s", buf1, buf2);
    x = strtof(buf2, NULL) - strtof(buf1, NULL);
    printf("So tien dien phai tra la = %d", tinhTienDien(tinhDonGia(x), x));
    return 0;
}