#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("hello.txt", "w");

    fputs("Hello, justin!\n", fp);
    fputs("Bye, justin!", fp);

    fclose(fp);

    return 0;
}
