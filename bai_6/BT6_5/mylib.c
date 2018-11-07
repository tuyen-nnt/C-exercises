#include <stdlib.h>
#include <stdio.h>

int menu()
{
    char buf1[1] = {};
for (int i = 2; i < 5; i++) {
printf("%d. Bai tap 6.%d.\n", i, i);
}
printf("5. Thoat\n");
printf("Lua chon cua ban (2-5) : ");
scanf("%s", buf1);
int a = strtol(buf1, NULL, 10);
return a;
}