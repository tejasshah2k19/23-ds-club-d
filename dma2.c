#include <stdio.h>
#include <stdlib.h>

int add()
{
    int x; // 4 byte - local variable
    int y;
    return x + y;
} // x release
int main()
{
    // DMA -> pointer
    int *a;
    int *p;
    float *x;
    a = (int *)malloc(sizeof(int));     // 4
    x = (float *)malloc(sizeof(float)); // 8
    // void* -> generic pointer ->
    //
    //
    free(a); // release a

    a = malloc(4);
    p = calloc(5, sizeof(int));

    return 0;
} // a release

// 16GB -> 16000MB ->10MB -> 1600 -> 1601-> loading