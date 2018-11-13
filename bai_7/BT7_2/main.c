#include <stdio.h>
#include <stdlib.h>

void nhapMang(int** array, int* size){
    *size = 0;
    char buffer[10];

    while (*size <= 0) {
        printf("Nhap vao so luong phan tu: ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }
    *array = (int*) calloc(*size, sizeof(int));
    for (int i = 0; i < *size, i++){
        printf("Nhap vao phan tu thu %d", i+1);
        scanf("%s", buffer);
        (*array)[i] = (int)strtol(buffer, NULL, 10);
    }
}
int main() {
    int size1 = 0;
    int* a = NULL;
    nhapMang(&a, &size1);
    for (int i = 0; i < size1; i++)
        printf("%d", a[i]);


    return 0;
}