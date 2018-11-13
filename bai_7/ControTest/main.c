#include <stdio.h>
int foo(int* g) //khai bao bien kieu dia chi
{
    *g = *g + 1;
     //g = g + 1;
}
int main() {
    /*int x = 5;
    int *p = &x;
    int k = *p;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &p);
    printf("%d\n", k);*/

    /*int x = 5;
    int *p = &x;
    foo(p);
    foo(&x); //gia tri x thay doi vi truyen dia chi
    printf("%u\n", *p);
    printf("%u", x);*/

    /*int a[100] = {1, 2, 3};
    int *p = a; //a = dia chi cua phan tu dau tien a[0] => p = dia chi a[0]
    printf("%d\n", p + 1);
    printf("%d\n", *(p + 2));*/

    /*void xuatMang(int *a, int n){
        for (int i = 0; i < n; i++)
            printf("%d", a[i]);
    }*/




        // Macro
        // http://nadeausoftware.com/articles/2012/02/c_c_tip_how_detect_processor_type_using_compiler_predefined_macros#x86andx8664
#if defined(__x86_64__) || defined(_M_X64)
        printf("May dang chay tren kien truc 64bit\n");
#elif defined(__i386) || defined(_M_IX86)
        printf("May dang chay tren kien truc 32bit\n");
#endif

    //#include <stdint.h> //bat chap may 32 hay 64 bit neu sd kieu du lieu nay:
        //uint8_t
        //uint16_t
        //uint64_t
        //uint32_t

        int a[100] = {1,2,3}; //gia tri cua tung ptu trong a co kieu int

        // Ép kiểu con trỏ a về kiểu số nguyên.
        // Lưu ý con trỏ trên máy 64bit có kích thước là 64bit do đó phải lưu bằng biến unsigned long
        // (vì sizeof(unsigned long) = 8 byte = 64 bit
        unsigned long p = (unsigned long) a;

        // Cho p nhảy đến vùng nhớ lưu phần tử thứ 2 trong mảng a, tức a[1]
        // 1 là chỉ số của phần tử trong mảng a muốn nhảy đến
        p = p + 1 * sizeof(int); //int o day la size cua tung phan tu trong mang a co kieu int

        // Ép kiểu p về kiểu con trỏ int*
        // c là con trỏ trỏ đến phần tử thứ 2 trong mảng a, tức a[1]
        int* c = (int*)p;

        // In ra giá trị vùng nhớ tại địa chỉ mà c đang trỏ đến, tức a[1]
        printf("a[1] = %u\n", *c);

        return 0;

    return 0;
}