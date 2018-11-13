#include <stdio.h>
#include <stdlib.h>


#define IN 1
#define OUT 0


void nhapMang(int** array, int* size){
    *size = 0;
    char buffer[10];

    while (*size <= 0) {
        printf("Nhap vao so luong phan tu: ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }
    *array = (int*) calloc(*size, sizeof(int));
    for (int i = 0; i < *size; i++){
        printf("Nhap vao phan tu thu %d : ", i+1);
        scanf("%s", buffer);
        (*array)[i] = (int)strtol(buffer, NULL, 10);
    }
}
int timK(int** array, int* size, int* k){
    char buffer[10];
    int Giua;
    printf("Nhap vao so nguyen k : ");
    scanf("%s", buffer);
    *k = (int) strtol(buffer,NULL,10);
    int Dau = 1, Cuoi = *size, Tim_thay = IN;
    while ((Dau <= Cuoi)&&(Tim_thay == IN)){
        Giua = (Dau + Cuoi)/2;
        if ((*array)[Giua] == *k)
            Tim_thay = OUT;
        else
            if ((*array)[Giua] > *k)
                Cuoi = Giua - 1;
            else
                Dau = Giua + 1;
    }
    if (Tim_thay == OUT)
        printf("Chi so tim duoc la : a[%d]\n", Giua);
    else printf("Khong tim thay\n");
}

int maxornot(int** array, int* size, int* k){
    int dem = IN;
    for (int i = 0; i < *size; i++){
        if ((*array)[i] > *k)
            dem = OUT;
    }
    return dem;
}

int main() {
    int size1 = 0;
    int* a = NULL;
    int k = 0;

    nhapMang(&a, &size1);
    for (int i = 0; i < size1; i++)
        printf("%d ", a[i]);
    printf("\n");
    timK(&a, &size1, &k);

    if (maxornot(&a, &size1, &k) == IN)
        printf("k la phan tu lon nhat.");
    else
        printf("k khong phai la phan tu lon nhat.");
    return 0;
}