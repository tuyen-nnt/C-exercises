#include <stdio.h>
#include <stdlib.h>

struct DONTHUC
{
    float heso;
    int somu;
};
typedef struct DONTHUC donthuc;

void nhapdt(donthuc* dt)
{
    char buffer[10];

    printf("Nhap vao he so don thuc = ");
    scanf("%s", buffer);
    (*dt).heso = (float*) strtof(buffer, NULL, 10);

    printf("Nhap vao so bac cua don thuc = ");
    scanf("%s", buffer);
    (*dt).somu = (float*) strtof(buffer, NULL, 10);
}

donthuc tichdt(donthuc a, donthuc b)
{
    donthuc tich;

    tich.heso = a.heso * b.heso;
    tich.somu = a.somu * b.somu;

    return tich;
}

donthuc thuongdt(donthuc a, donthuc b)
{
    donthuc thuong;
    thuong.heso = a.heso / b.heso;
    thuong.somu = a.somu / b.somu;

    return thuong;
}

donthuc DaoHamCap1(donthuc a)
{
    donthuc c;
    c.heso = a.heso * a.somu;
    c.somu = a.somu - 1;
    return c;

}

void xuatdt(donthuc a)
{
    printf("%6.3fx%d", a.heso, a.somu);
}

int main()
{
    donthuc dt1, dt2;
    donthuc tich, thuong, daoham, nguyenham;

    nhapdt(&dt1);
    nhapdt(&dt2);

    tich = tichdt(dt1, dt2);
    xuatdt(tich);

    thuong = thuongdt(dt1, dt2);
    xuatdt(thuong);

    daoham = DaoHamCap1(dt1);
    xuatdt(daoham);

    daoham = DaoHamCap1(dt2);
    xuatdt(daoham);

    //Tinh nguyen ham???

    return 0;
}

