#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = NULL;

    ptr = &x;

    printf("nilai pointer adalah : %d", *ptr);
    return 0;
}