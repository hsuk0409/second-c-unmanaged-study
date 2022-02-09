#include <stdio.h>

typedef struct {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
} bitflag_t;

int main(void)
{
    bitflag_t flags = {0, };
    printf("%d\n", flags.b0);
    flags.b0 = 1;
    printf("%d\n", flags.b0);

    return 0;
}
