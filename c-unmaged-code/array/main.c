#include <stdio.h>

static int arrArr[20][20];

void set_arr(void);

int main(void)
{
    
    size_t i, k;

    set_arr();
    for (i = 0; i < 20; ++i) {
        printf("%lu= ", i);
        for (k = 0; k < 20; ++k) {
            printf("%d ", arrArr[i][k]);
        }
        printf("\n");
    }

    return 0;
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
