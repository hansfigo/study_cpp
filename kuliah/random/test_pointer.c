#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int *aPtr = &a;

    printf("%d\n", a);
    printf("%p\n", aPtr);

    a *= 2;

    printf("%d\n", a);
    printf("%p\n", aPtr);
    return 0;
}
