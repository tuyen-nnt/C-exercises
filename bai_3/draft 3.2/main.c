#include <stdio.h>
#include <stdlib.h>

int tinhSoNut(int Soxe)
{
    int soNut = 0;
    while (Soxe != 0)
    {
        soNut = soNut + Soxe % 10;
        Soxe = Soxe / 10;
    }

    return soNut;
}

int main() {
    char* bangSo= (char*)malloc(100);
    int Soxe = 0;
    while (Soxe == 0)
    {
        printf("Moi nhap vao bang so xe: ");
        scanf("%s", bangSo);

        // https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
        Soxe = int atoi(const char *bangSo);
  
    }
    /*int soNut = 0;
    while (bangSo != 0)
    {
        soNut = soNut + bangSo % 10;
        bangSo = bangSo / 10;
    }*/

    int soNut = tinhSoNut(Soxe);

    printf("Bang so vua nhap %s co so nut la %d\n", bangSo, soNut);
    return 0;
}
