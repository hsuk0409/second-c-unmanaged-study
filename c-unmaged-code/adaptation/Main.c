#include <stdio.h>
#include "bubble_sort.h"
#include "quick_sort.h"

#define ARR_SIZE (10)

void printArr(int* arr);

int main(void) 
{
    int nums1[ARR_SIZE] = {9, 2, 4, 6, 5, 1, 10, 3, 7, 8};
    int nums2[ARR_SIZE] = {8, 2, 5, 4, 6, 3, 12, 0, 10, 1};

    printf("Before bubble sort!\n");
    printArr(nums1);

    printf("After bubble sort!\n");
    bubble_sort(nums1, ARR_SIZE);
    printArr(nums1);

    printf("Before quick sort!\n");
    printArr(nums2);

    printf("After quick sort!\n");
    my_quick_sort(nums2, 0, (size_t)(ARR_SIZE - 1));
    printArr(nums2);
    
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