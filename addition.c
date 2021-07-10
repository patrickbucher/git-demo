#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    int a = 3;
    int b = 5;
    int c = add(a, b);

    printf("%d + %d = %d\n", a, b, c);

    return 0;
}
