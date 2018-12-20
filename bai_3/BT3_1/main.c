#include <stdio.h>
#include <stdlib.h>

int TinhTuoi(int Nsinh)
{
   int Nnay = 2018;
   int Tuoi = 0;
   Tuoi = Nnay - Nsinh;
   return Tuoi;
}

int main()
{
    char *ten = (char*)malloc(10);
    int Nsinh = 0;
    while (Nsinh == 0)
    {
        printf("Nhap vao ten cua ban : ");
        scanf("%s", ten);
        printf("Nhap vao nam sinh : ");
        scanf("%d", &Nsinh);
    }
    int Tuoi = TinhTuoi(Nsinh);
    printf("Chao ban %s, nam nay ban %d tuoi.", ten, Tuoi);
    return 0;
}