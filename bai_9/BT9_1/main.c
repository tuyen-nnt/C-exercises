#include <stdio.h>
#include <stdlib.h>
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
    FILE *file;
    file = fopen("myfile.txt","w");

    if(file == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%s",buffer1);
    num1 = (int) strtol(buffer1, NULL, 10);

    fprintf(file,"%d ", num1);

    printf("Enter num: ");
    scanf("%s",buffer2);
    num2 = (int) strtol(buffer2, NULL, 10);

    fprintf(file,"%d", num2);
    fclose(file);


    if ((file = fopen("myfile.txt","r")) == NULL)
    {
        printf("Error! openingm file");

// Program exits if the file pointer returns NULL.
        exit(1);
    }


    fscanf(file,"%d", &num1);
    fscanf(file,"%d", &num2);

    printf("Value of n = %d\n", num1);
    printf("Value of m = %d", num2);
    fclose(file);

    int number;

    fprintf(file," Danh sach so nguyen to tu m den n : \n");
    for (number = num1; number < num2; number++)
    {
        if (CheckPrimeNumber(number) == TRUE)
            fprintf(file, "%d  ", number);
    }

    return 0;
}