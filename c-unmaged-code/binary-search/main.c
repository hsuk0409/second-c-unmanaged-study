#include <stdio.h>
#include <assert.h>

#include "binary_search.h"

int main(void) 
{
    int nums[10] = {0, 1, 3, 4, 6, 7, 8, 9, 10, 15};
    int result = 0;

    result = binary_search(nums, 10, 6);

    printf("Binary Search Result: %d\n", result);
    assert(result == 4);

    return 0;
}
