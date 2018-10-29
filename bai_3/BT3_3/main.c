#include <stdio.h>
#include <stdlib.h>

float tinhDoF(float C)
{
    float F;
    F = C*1.8 + 32;
    return F;
}
float tinhDoK(float C)
{
    float K;
    K = C + 273;
    return K;
}
int main()
{
    float C;
    char inputBuffer[100] = {};
    do
    {
        printf("Nhap vao nhiet do C: ");
        scanf("%s", inputBuffer);

        // https://stackoverflow.com/questions/26080829/detecting-strtol-failure
        C = strtof(inputBuffer, NULL);
    }
    while ((C < 0.0)||(C > 100));

    printf("Nhiet do vua nhap la: %5.1f\n", C);
    float F = tinhDoF(C);
    float K = tinhDoK(C);
    printf("Nhiet do F = %5.1f\n", F);
    printf("Nhiet do K = %5.1f", K);
    return 0;
}
//argc la tham so
//argv la mang moi phan tu cua mang la 1 tham so
