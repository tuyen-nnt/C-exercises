#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

void nhapMang(int** array, int *size) {
    char buffer[10];
    *size = 0;
    while (*size <= 0) {
        printf("Nhap vao so luong phan tu : ");
        scanf("%s", buffer);
        *size = (int) strtol(buffer, NULL, 10);
    }
    *array = (int*)calloc(*size, sizeof(int));
    for (int i = 0; i < *size; i++) {
        printf("Nhap vao phan tu thu %d : ", i + 1);
        scanf("%s", buffer);
        (*array)[i] = (int) strtol(buffer, NULL, 10);
    }
}
int cauA(int** array, int* size){
    int check = IN;
    int i = 0;
    while (((i+1) < *size)&&(check == IN)){
        if ((*array)[i] > (*array)[i+1])
            check = OUT;
        i++;
    }
return check;
}

void mangPalindrome(int** array, int** palindrome, int* size){//tham so dien vao la mang a
    *palindrome = (int*)calloc(*size, sizeof(int));
    //(*palindrome)[0] = (*array)[*size - 1];
    //(*palindrome)[*size - 1] = (*array)[0];
    for (int i = 0; i < *size; i++)
        (*palindrome)[i] = (*array)[(*size-1) - i];
}

int ktPalindrome(int* array, int* palindrome, int size){
    int check = IN;
    int i = 0;

    while ((check == IN) && (i++ < size))
    {
        if (array[i] != palindrome[i])
        {
            return OUT;
        }
    }

    return check;
}

int ktCSC(int* array, int size)
{
    if (size <= 1)
        return IN;

    int psai = array[1] - array[0];

    int check = IN;
    int i = 1;
    while ((check == IN) && (i < size-1))
    {
        if (array[i+1] != (array[i] + psai))
            check = OUT;

        i++;
    }

    return check;

    /*for (int i = 2; i < size; i++)
    {
        if (array[i] - array[i-1] != psai)
        {
            return OUT;
        }
    }

    return IN;*/
}

int main() {
    int* a;
    int* p;
    int size1 = 0;

    nhapMang(&a, &size1);

    if (cauA(&a, &size1) == OUT)
        printf("Mang khong tang dan.\n");
    else printf("Mang tang dan.\n");

    mangPalindrome(&a, &p, &size1);
    //printf("%d", a);
    for (int i = 0 ; i < size1; i++)
       printf("%d\n", p[i]);

    if (ktPalindrome(a, p, size1) == OUT)
        printf("Mang khong doi xung.\n");
    else
        printf("Mang doi xung.\n");

    if (ktCSC(a, size1) == IN)
        printf("Mang la cap so cong.");
    else
        printf ("Mang khong la cap so cong.");

    return 0;
}