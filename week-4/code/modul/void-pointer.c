#include <stdio.h>

int main() {
    // Your code goes here
    int a = 10;
    void *ptr = &a;
    printf("%d",*(int*)ptr); // casting ke integer pointer dari yang sebelumnya void pointer
    return 0;
}