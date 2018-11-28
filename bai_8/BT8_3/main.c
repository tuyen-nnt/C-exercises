#include <stdio.h>
#include <stdlib.h>
//Khai bao kieu cau truc phan so, nhap vao 2 phan so
//Tinh va xuat ra ket qua tong, hieu , tich, thuong, nghich dao, rut gon cua 2 pso vua nhap

struct PhanSo
{
    int tu;
    int mau;
};

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else b = b - a;
    }
    return a;
}

void rutgon(struct PhanSo* ps)
{
    int c = UCLN((*ps).tu, (*ps).mau);

    (*ps).tu = (*ps).tu/c;
    (*ps).mau = (*ps).mau/c;
}

void tongps(struct PhanSo* a, struct PhanSo* b, struct PhanSo* tong) {

    (*tong).tu = (*a).tu * (*b).mau + (*a).mau * (*b).tu;
    (*tong).mau = (*a).mau * (*b).mau;
    rutgon(tong);
}


/*   int hieu = a - b;
    printf("Hieu cua 2 pso = %d", hieu);

    int tich = a * b;
    printf("Tich cua 2 pso = %d", tich);

    int thuong = a/b;
    printf("Thuong cua 2 pso = %d", thuong);

}*/

void nhapps(struct PhanSo* ps1, struct PhanSo* ps2)
{
    int tu[2];
    int mau[2];
    char buffer[10];

    for(int i = 0; i < 2; i++)
    {
        printf("Nhap vao tu so %d = ", i + 1);
        scanf("%s", buffer);
        tu[i] = (int) strtol(buffer, NULL, 10);

        do
        {
            printf("Nhap vao mau so %d = ", i + 1);
            scanf("%s", buffer);
            mau[i] = (int) strtol(buffer, NULL, 10);
            if (mau[i] == 0)
                printf("Mau so phai khac 0.");
        }
        while (mau[i] == 0);
    }

    (*ps1).tu = tu[0];
    (*ps1).mau = mau[0];

    (*ps2).tu = tu[1];
    (*ps2).mau = mau[1];
}

int main() {

    struct PhanSo ps1;
    struct PhanSo ps2;
    struct PhanSo tong;

    nhapps(&ps1, &ps2);

    tongps(&ps1, &ps2, &tong);
    printf("Tong cua 2 pso = %d/%d ", tong.tu, tong.mau);

    return 0;
}