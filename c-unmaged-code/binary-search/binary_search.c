#include <stdio.h>
#include "binary_search.h"

int binary_search(int* nums, size_t num_len, int target)
{
    int* num_p = nums;
    int start = 0;
    int end = (int)num_len;
    int mid = (start + end) / 2;
    
    while (start <= end) {
        printf("num[mid]: %d\n", num_p[mid]);

        if (num_p[mid] == target) {
            return mid;
        } else if (num_p[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}
