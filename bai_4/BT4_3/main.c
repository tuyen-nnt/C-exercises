#include <stdio.h>

int tinhSoNgay(int thang, int nam)
{
    int SN = 0;
    switch(thang)
    {
        case 4: case 6: case 9: case 11:
            SN = 30; break;
        case 2:
        {
            if ((nam % 400 == 0)||((nam % 4 == 0)&&(nam % 100 != 0)))
                    SN = 29;
                            else SN = 28; break;
        }
        case 1: case 3: case 5: case 7: case 10: case 12:
            SN = 31; break;
        default:
            printf("Thang khong ton tai."); break;
    }
    return SN;
}

int main() {
    int T,N;
    printf("Hay cho biet thang va nam : ");
    scanf("%d %d", &T,&N);
    //printf("\n");
    printf("Thang %d nam %d co %d ngay.", T, N, tinhSoNgay(T,N));
    return 0;
}