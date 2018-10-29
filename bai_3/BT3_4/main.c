#include <stdio.h>
#include <stdlib.h>

int doiGio(int Gio)
{
    int giayGio;
    giayGio = Gio*60*60;
    return giayGio;
}
int doiPhut(int Phut)
{
    int giayPhut;
    giayPhut = Phut*60;
    return giayPhut;
}

int main()
{
    int G1,G2,P1,P2,g1,g2 = 0;
    printf("Nhap vao Gio, Phut, giay cua T1 : ");
    scanf("%d %d %d",&G1,&P1,&g1);
    printf("Ban vua nhap vao T1: %d gio %d phut %d giay.",G1,P1,g1);
    printf("\n");
    printf("Nhap vao Gio, Phut, giay cua T1 : ");
    scanf("%d %d %d",&G2,&P2,&g2);
    printf("Ban vua nhap vao T2: %d gio %d phut %d giay.\n",G2,P2,g2);
    int giayGio = doiGio(abs(G1-G2));
    int giayPhut = doiPhut(abs(P1-P2));
    int khoangCach = giayGio + giayPhut + abs(g1-g2);
    printf("Khoang cach giua T1 va T2 la %d giay.", khoangCach);
    return 0;
}