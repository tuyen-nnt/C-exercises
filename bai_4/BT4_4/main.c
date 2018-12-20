#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

float A(int n)
{
    float kqua = 1.0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            kqua = kqua - 1.0 / i;
        else
            kqua = kqua + 1.0 / i;
    }
    return kqua;
}

double B(int n)
{
    double gt = 1.0;
    for (; n > 0; n--)
        gt = gt*n;
    return gt;
}

double C(int n)
{
    float kqua = 0.0;
    for (int i = 0; i <= n; i++)
        kqua += B(i);
    return kqua;
}

int D(int n)
{   int a = 0;
    int S = 0;
    for (int i = 1; a <= n; i++ ) {
        a = i * i;
        S += a;
    }
    return S;
}
int E(int n)
{
   bool check[n+1];
   int S = 0;
   if (n <= 1)
       S = 0;
   else {
       for (int i = 2; i <= n; i++)
           check[i] = true;

       for (int i = 2; i <= n; i++)
           if (check[i] == true)
           {
               for (int j = 2*i; j <= n; j += i)
                   check[j] = false;
           }
       for (int i = 2; i <= n; i++)
           if (check[i] == true)
               S += i;
   }
   return S;
}

int main() {
    char num[10] = {};
    int n = 0;
    do {
    printf("Nhap vao so nguyen duong n : ");
    scanf("%s", num);
    } while (strtol(num, NULL, 10) < 0);

    n = strtol(num, NULL, 10);

    printf("Cau a) S = %.2f\n", A(n));
    printf("Cau b) S = %.1lf\n", B(n));
    printf("Cau c) S = %.1lf\n", C(n));
    printf("Cau d) S = %d\n", D(n));
    printf("Cau e) S = %d\n", E(n));
    return 0;
}
