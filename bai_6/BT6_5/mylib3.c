#include <stdio.h>

void check(double a, double b, double c){
if ((a + b > c) || (a + c > b) || (b + c > a))
{
if ((a == b)&&(b == c))
printf("Tam giac deu\n");
else
if((a == b)||(b ==c)||(c == a))
printf("Tam giac can\n");
else
if ((a*a == b*b + c*c)||(b*b == a*a + c*c)||(c*c == b*b + a*a))
printf("Tam giac can");
else printf("Tam giac thuong\n");
}
else printf("Khong phai ba canh tam giac\n");
}