#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int* i, int* j) {
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

/* Original algorithm Alg1*/
void Alg1(int a[], int n) {
    int i, j;
    puts(">>> Alg1");
    for (i = 0; i < n - 1; i++) {
        for (j = i; j < n - 1; j++) {
            if (a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
        }
    }
}

/* Algortihm 1 with both improvements */
void Alg1_impr(int a[], int n) {
    int i, j, check = 1;
    puts(">>> Alg1_impr");
    for (i = 0; i < n; i++){
        if(check){
            check = 0;
            for (j = 0; j < n - 1 - i; j++)
                if(a[j] > a[j + 1]){
                    swap(&a[j], &a[j+1]);
                    check = 1;
                }
        }else break;
    }
}

void fillArr(int a[], int n) {
    int i;
    puts("Array:");
    for (i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }
}

void printArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int i, j, n = 8;
    int array[n];
    srand(time(NULL));

    /* Riempimento array */
    fillArr(array, n);

    /* Stampa array */
    printArr(array, n);

    /* Primo ordinamento (Alg1) */
    //Alg1(array, n);
    //printArr(array, n);

    /* Secondo ordinamento (Alg1_impr) */
    Alg1_impr(array, n);
    printArr(array, n);

    return 0;
}
