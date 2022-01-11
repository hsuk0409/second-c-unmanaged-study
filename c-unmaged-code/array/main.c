#include <stdio.h>

int main(void)
{
    int arrArr[20][20] = {0,};
    size_t i;
    size_t k;

    for (i = 0; i < 20; ++i) {
        for (k = 0; k < 20; ++k) {
            printf("%d ", arrArr[i][k]);
        }
        printf("\n");
    }

    return 0;
}
