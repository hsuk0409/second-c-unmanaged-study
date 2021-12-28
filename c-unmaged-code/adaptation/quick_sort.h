#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <stdio.h>

void my_quick_sort(int* nums, size_t l, size_t r);
size_t partition(int* nums, size_t l, size_t r);
void swap(int* nums, size_t l, size_t r);

void my_quick_sort(int* nums, size_t l, size_t r) 
{
    if (l < r) {
        size_t pivot = partition(nums, l, r);

        my_quick_sort(nums, l, pivot - 1);
        my_quick_sort(nums, pivot + 1, r);
    }
}

size_t partition(int* nums, size_t l, size_t r)
{
    size_t idx = l;
    size_t i;

    for (i = idx; i < r; ++i) {
        if (nums[i] < nums[r]) {
            swap(nums, idx, i);
            ++idx;
        }
    }

    swap(nums, idx, r);

    return idx;
}

void swap(int* nums, size_t l, size_t r)
{
    size_t tmp = nums[l];
    nums[l] = nums[r];
    nums[r] = tmp;
}

#endif
