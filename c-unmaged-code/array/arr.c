#include <stdio.h>
#include "arr.h"

void print_arr(void)
{
    size_t i, k;

    for (i = 0; i < 20; ++i) {
        printf("%lu= ", i);
        for (k = 0; k < 20; ++k) {
            printf("%d ", arrArr[i][k]);
        }
        printf("\n");
    }
    printf("\n");
}

void set_arr(void)
{
    size_t i, k;

    for (i = 0; i < 15; ++i) {
        for (k = 0; k < 15; ++k) {
            arrArr[i][k] = 0;
        }
    }

    for (i = 15; i < 20; ++i) {
        for (k = 0; k < 20; ++k) {
            arrArr[i][k] = 3;
        }
    }
}

void fill_all_row(const size_t row)
{
    size_t i;

    for (i = 0; i < 20; ++i) {
        arrArr[row][i] = 1;
    }
}

void fill_all_column(const size_t col)
{
    size_t i;

    for (i = 0; i < 20; ++i) {
        arrArr[i][col] = 1;
    }
}
