#include <stdio.h>
#include <stdlib.h>
#include "main2.h"
#include "main3.h"
#include "main4.h"
#include "mylib.h"


int main()
{

    int x = menu();

    if (x == 2)
    {
        main2();
        menu();}

    else if (x == 3)
    {
        main3();
        menu();}
    else if (x == 4)
    {
        main4();
        menu();}
    else if (x == 5)
        return 0;

}