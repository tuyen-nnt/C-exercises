#include <stdio.h>
#define MAX 100

void nhapMang(int a[], int N){
    printf("Nhap vao so phan tu trong mang : ");
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++)
    {
    printf("Nhap vao lan luot cac phan tu trong mang : ");
    scanf("%d\n", &a[i]);}
}

int main() {
    int a[MAX], size1;
    nhapMang(a,size1);
    return 0;
}