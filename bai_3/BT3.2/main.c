#include <stdio.h>
#include <stdlib.h>

int tinhSoNut(char bangSo[])
{
    int soNut = 0;
    for(int i=0;i!=5;i++)
        soNut += (int) strtol(bangSo[i], NULL, 10);
//cho toi khi so nut <10
}

    return soNut;
}

int main() {
    char bangSo[]= NULL;
    while ((int) strtol(bangSo[i], NULL, 10) == NULL)
    {
        printf("Moi nhap vao bang so xe: ");
        scanf("%s", bangSo);

        // https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
    }
    /*int soNut = 0;
    while (bangSo != 0)
    {
        soNut = soNut + bangSo % 10;
        bangSo = bangSo / 10;
    }*/

    int soNut = tinhSoNut(bangSo);

    printf("Bang so vua nhap %s co so nut la %d\n", bangSo, soNut);
    return 0;
}
