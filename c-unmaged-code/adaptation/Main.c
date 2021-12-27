#include <stdio.h>
#include "bubble_sort.h"

#define ARR_SIZE (10)

void printArr(int* arr);

int main(void) 
{
    int nums[ARR_SIZE] = {9, 2, 4, 6, 5, 1, 10, 3, 7, 8};

    printf("Before sort!\n");
    printArr(nums);

    printf("After sort!\n");
    bubble_sort(nums, ARR_SIZE);
    printArr(nums);
    
    return 0;
}

void printArr(int* arr)
{
    int* tmp = arr;
    int i;

    for (i = 0; i < ARR_SIZE; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}