#include <stdio.h>
void add()
{
}
int main()
{

    void *ijk;
    int a = 100;
    int *p; // pointer ->sizeof -> int { narrow far huge }
    float *q;
    float t = 90.66f;
    p = &a;
    q = &t;

    ijk = &a;

    // void *x;
    // x =&a; // int
    char str[56];
    char *str2;

    int k;    // int*
    float ff; // float*

    int jk[90];
    int *kj = &jk[0]; //&jk[0]
    printf("\n %d ", *kj);
    kj++;
    printf("\n %d ", *kj);

    printf("\n%d ", sizeof(a)); // 4 4 4 4        4
    printf("\n%d ", sizeof(p)); // 0 4 4 machine  4
    printf("\n%d ", sizeof(q)); // 0 8 8          4
    printf("\n%d ", sizeof(int));
    printf("\n%d ", sizeof(float));
    // printf("\n%d ", sizeof(*));

    return 0;
}