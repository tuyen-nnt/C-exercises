#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int tinhToan(char* toan,int a, int b)
{
    int kqua;
    switch(putchar(toan))
    {
        case '+':
            kqua = a + b; break;
        case '-':
            kqua = a - b; break;
        case '*':
            kqua = a*b; break;
        case '/':
            kqua = a/b; break;
        case '%':
            kqua = a%b; break;
        default:
            printf("Toan tu khong ton tai.");
    }
    return kqua;
}
int main() {

    char* c = (char*)malloc(1);
    memset(c, 0 , sizeof(c));

    //printf("Nhap vao a va b : ");
    //scanf("%d %d", &a, &b);
    printf("Nhap vao a va b : ");
    int a = getchar();
    int b = getchar();
    printf("\n");

    printf("Nhap vao phep toan: ");
    c = getchar();

    printf("\n");

    printf("Ket qua phep toan = %d ", tinhToan(putchar(c),putchar(a),putchar(b)));
    return 0;
}

/* Cach 1:
int tinhToan(char* toan,int a, int b)
{
    int kqua;
    switch(toan[0])
    {
        case '+':
            kqua = a + b; break;
        case '-':
            kqua = a - b; break;
        case '*':
            kqua = a*b; break;
        case '/':
            kqua = a/b; break;
        case '%':
            kqua = a%b; break;
        default:
            printf("Toan tu khong ton tai.");
    }
    return kqua;
}
int main() {
    int a,b = 0;
    char* ptoan = (char*)malloc(1);
    memset(ptoan,0,sizeof(ptoan));

    printf("Nhap vao a va b : ");
    scanf("%d %d", &a, &b);
    printf("Nhap vao phep toan: ");
    scanf("%s", ptoan);

    //int kqua = tinhToan(ptoan,a,b);

    printf("Ket qua phep toan = %d ", tinhToan(ptoan,a,b));
    return 0;
}*/

/*char toan[] = {};
  toan = ptoan[0] -48;*/