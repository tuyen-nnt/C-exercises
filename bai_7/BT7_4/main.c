#include <stdio.h>      // Sử dụng các hàm printf(), scanf()
#include <stdlib.h>     // Sử dụng malloc()
#include <string.h>     // Sử dụng strlen(), strncpy

// Copy n kí tự từ s2 và chèn vào sau s1
void stringCopy(char* s1, char* s2, int n)
{
    // Ngắt nếu input không hợp lệ
    if (s1 == NULL || s2 == NULL || n == 0)
    {
        return;
    }

    // Chỉ số của null terminated character trong s1
    // (là vị trí sẽ chèn s2 vào)
    int pNextChar = strlen(s1);     // s[pNextChar] = '\0'

    // Copy s2 vào s1
    for (int i = 0; i < n; i++)
    {
        s1[pNextChar++] = s2[i];
    }

    s1[pNextChar] = '\0';
}

// Chèn s1 vào giữa s2
// Có thể sử dụng hàm mặc định của c là strncpy() thay cho stringCopy tự viết
// https://www.tutorialspoint.com/c_standard_library/c_function_strncpy.htm
char* insert(char* s1, char* s2)
{
    // Ngắt nếu input không hợp lệ
    if (s1 == NULL || s2 == NULL)
    {
        return NULL;
    }

    int sizeS1 = strlen(s1);
    int sizeS2 = strlen(s2);

    // Cấp phát bộ nhớ để lưu chuỗi s
    char* s = (char*)malloc(sizeS1 + sizeS2 + 1);
    //char* s = (char*)calloc(sizeS1 + sizeS2 + 1, sizeof(char));

    // Chỉ số của kí tự nằm giữa xâu s2 mà tại đó ta sẽ cắt s2
    int pMidS2 = (sizeS2 + 1) / 2;

    // Copy nửa đầu của s2 vào s
    stringCopy(s, s2, pMidS2);
    //strncpy(s, s2, pMidS2);

    // Copy s1 vào s
    stringCopy(s, s1, sizeS1);
    //strncpy(s + pMidS2, s1, sizeS1);

    // Copy nửa sau của s2 vào s
    stringCopy(s, s2 + pMidS2, sizeS2 - pMidS2);
    //strncpy(s + pMidS2 + sizeS1, s2 + pMidS2, sizeS2 - pMidS2);

    // %lu là format của kiểu unsigned long
    printf("strlen(s) = %lu\n", strlen(s));

    return s;
}

int main() {
    char s1[100] = "";
    char s2[100] = "";

    printf("Nhap vao xau s1: ");
    scanf("%s", s1);
    printf("Nhap vao xau s2: ");
    scanf("%s", s2);

    // Chèn chuỗi s1 vào giữa s2
    char* s = insert(s1, s2);

    printf("s = %s\n", s);

    // Giải phóng vùng nhớ của s
    // vì con trỏ s được khởi tạo bởi malloc() / calloc()
    free(s);

    return 0;
}
