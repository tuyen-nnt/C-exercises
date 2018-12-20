#include <stdio.h>
#include <stdlib.h>

int main() {
    double a,b,c;
    char buf1[10];
    char buf2[10];
    char buf3[10];
    printf("Nhap vao a, b, c : \n");
    scanf("%s %s %s", buf1, buf2, buf3);
    a = strtof(buf1, NULL);
    b = strtof(buf2, NULL);
    c = strtof(buf3, NULL);
    if ((a + b > c) || (a + c > b) || (b + c > a))
    {
        if ((a == b)&&(b == c))
            printf("Tam giac deu");
        else
        if((a == b)||(b ==c)||(c == a))
            printf("Tam giac can");
        else
        if ((a*a == b*b + c*c)||(b*b == a*a + c*c)||(c*c == b*b + a*a))
            printf("Tam giac can");
        else printf("Tam giac thuong");
    }
    else printf("Khong phai ba canh tam giac");
    return 0;
}