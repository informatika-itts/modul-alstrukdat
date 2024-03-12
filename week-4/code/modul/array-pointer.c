#include <stdio.h>

int main() {
    // Your code goes here
    int angka[5] = {1, 2, 3, 4, 5};
    printf("*angka   = %d\n", *angka);
    printf("angka[0] = %d\n", angka[0]);

    printf("*angka   = %d\n", *(angka + 3));
    printf("angka[3] = %d\n", angka[3]);

    // how to pointer an array

    int (*ptr)[5]; 
    // ini berarti ada sebuah variabel pointer bernama ptr yang menunjuk sebuah array integer
    // yang mana array tersebut mempunyai

    ptr = &angka;
    printf("ptr   = %d\n", (*ptr)[2]);
    printf("ptr   = %d\n", *((*ptr)+3));

    // jangan gunakan ini

    int *ptr2[5]; 
    // ini berarti ada sebuah variabel bernama ptr2 yang menampung sebuah pointer ke integer sebanyak 5
    // jadi nanti akan ada 5 buah pointer yang disimpan pada array bernama ptr2
    int angka_ini_bro = 2;
    ptr2[0] = &angka_ini_bro;

    printf("nilai ptr2 : %d", *(ptr2[0]));
    printf("nilai ptr2 : %d", ptr2[0]);

    return 0;
}