#ifndef BUUBLE_SORT_H
#define BUUBLE_SORT_H

#include <stdio.h>

void bubble_sort(int* nums, int length);

void bubble_sort(int* nums, int length)
{
    int* tmp_p = nums;
    int i;
    int k;

    for (i = 0; i < length - 1; ++i) {
        for (k = 0; k < length - i - 1; ++k) {
            int tmp;
            if (tmp_p[k] > tmp_p[k + 1]) {
                tmp = tmp_p[k];
                tmp_p[k] = tmp_p[k + 1];
                tmp_p[k + 1] = tmp;
            }
        }
    }
}

#endif
