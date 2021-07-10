#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++) {
        printf("[%4d]. argument = %s\n", i, argv[i]);
    }

    return 0;
}
