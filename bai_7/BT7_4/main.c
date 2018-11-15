#include <stdio.h>
#include <memory.h>
#include <malloc.h>

// Copy n kí tự từ s2 và chèn vào sau s1
void stringCopy(char* s1, char* s2, int n)
{
    int pLastChar = (int) (strlen(s1) - 1);

    for (int i = 0; i < n; i++)
    {
        s1[pLastChar+1+i] = s2[i];
    }
}

void insert(char* s1, char* s2, char* s)
{

    /*for (int i = 0; i < (strlen(s2)/2); i++)
        s[i]= s2[i];
    for (int i = 0; (i + strlen(s2)/2) < (strlen(s1)); i++)
        s[i + strlen(s2)/2] = s1[i];
    for (int i = 0; i < (strlen(s1)/2); i++)
        s[i + (strlen(s2)/2) + strlen(s1)] = s2[strlen(s2)+1];*/

    int sizeS2 = (int) strlen(s2);
    int mid = sizeS2 / 2;

    stringCopy(s, s2 + mid, sizeS2 - mid);

}

int main() {
    char s1[10] = {};
    char s2[10] = {};
    char s[20] = {};

    printf("Nhap vao xau s1 : ");
    scanf("%s", s1);
    printf("Nhap vao xau s2 : ");
    scanf("%s", s2);

    insert(s1, s2, s);
    for (int i = 0; i < (strlen(s1) + strlen(s2)); i++)
        printf("%s", s);
    return 0;
}0