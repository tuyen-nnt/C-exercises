#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define TRUE 1
#define FALSE 0

int CheckPrimeNumber(int number)
{
    if (number < 2)
        return FALSE;
    else if (number == 2)
        return TRUE;
    else if (number & 0)
        return FALSE;
    else {
        for (int i = 3; i <= sqrt(number); i += 2)
            if (number % i == 0)
                return FALSE;
        return TRUE;
    }
}

int main()
{
    char buffer1[2], buffer2[2];
    int num1, num2;
    FILE *input;
    FILE *output;
    input = fopen("input.txt","w");
    output = fopen("output.txt", "w");

    if(input == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%s",buffer1);
    num1 = (int) strtol(buffer1, NULL, 10);

    printf("Writing to input.txt: %d\n", num1);
    fprintf(input,"%d ", num1);

    printf("Enter num: ");
    scanf("%s",buffer2);
    num2 = (int) strtol(buffer2, NULL, 10);

    printf("Writing to input.txt: %d\n", num2);
    fprintf(input,"%d", num2);
    fclose(input);


    if ((input = fopen("input.txt","r")) == NULL)
    {
        printf("Error! opening file");

// Program exits if the file pointer returns NULL.
        exit(1);
    }


    fscanf(input,"%d", &num1);
    fscanf(input,"%d", &num2);

    fprintf(output,"Value of n = %d\n", num1);
    fprintf(output,"Value of m = %d", num2);
    fclose(input);

    int number;

    fprintf(output," Danh sach so nguyen to tu m den n : \n");
    for (number = num1; number < num2; number++)
    {
        if (CheckPrimeNumber(number) == TRUE)
            fprintf(output, "%d  ", number);
    }

    return 0;
}