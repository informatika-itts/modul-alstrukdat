#include <stdio.h>

int *func()
{
    int num = 10;
    return &num;
}

int main()
{
    // Your code goes here
    int *ptr = NULL;
    ptr = func();
    printf("%d", *ptr);
    
    return 0;
}