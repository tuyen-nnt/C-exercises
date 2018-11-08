#include <stdio.h>
#include "mylib.h"
#define  MAX 100

int cauA (int* a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            dem += 1;
    }
    return dem;
}
int cauB (int a[], int n){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0)
            dem += 1;
    }
    return dem;
}
int cauC(int a[], int n) {
    int check[MAX];
    int prime[] = {1};

    int dem = 0;
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 1) {
            check[k] = a[i];
            k += 1;
        }
    }
    for (k = 0; k < n; k++) {
        if ((check[k] > 2) && (check[k] % 2 == 0))
            prime[k] = 0;
        else prime[k] = 1;
    }
    //for (k = 0; k < n; k++) {
    int x = 1;
    for (int j = x * 2; j < n; j += x)
        for (k = 0; k < n; k++) {
            if (check[k] == j)
                prime[k] = 0;
        }
    for (k = 0; k < n; k++) {
        if (prime[k] == 1)
            dem += 1;
    }
    return dem;
}


