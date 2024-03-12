#include <stdio.h>

int main()
{
    // Your code goes here
    int x = 100;
    int *awesome; // awesome adalah sebuah variabel yang bertipe pointer ke integer
    int *ptr = &x; // --> variabel ptr

    awesome = &x;

    printf("ptr = %d\n", ptr); // bro isi/nilai mu apa? (dalam hal ini variabel ptr berisi alamat sebuah variabel lain)
    printf("ptr = %d\n", *ptr); // tolong ambilkan/pointing sebuah nilai yang terkandung di semua alamat variabel yang kamu simpan
    printf("ptr = %d\n", *awesome);

    // pointer yang mempointing pointer
    printf("\n =========== Batas Suci ============ \n\n");

    int y = 100;
    int *ptr1 = &y;
    int **ptr2 = &ptr1;

    printf("y      = %d\n", y);
    printf("&y     = %d\n", &y);
    printf("\n");
    printf("ptr1   = %d\n", ptr1);
    printf("*ptr1  = %d\n", *ptr1);
    printf("&ptr1  = %d\n", &ptr1);
    printf("\n");
    printf("ptr2   = %d\n", ptr2);
    printf("*ptr2  = %d\n", *ptr2);
    printf("**ptr2 = %d\n", **ptr2);

    return 0;
}