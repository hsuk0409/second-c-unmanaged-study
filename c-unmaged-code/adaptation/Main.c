#include <stdio.h>
#include "bubble_sort.h"
#include "quick_sort.h"
#include "print_string.h"

#define ARR_SIZE (10)

void printArr(int* arr);

int main(void) 
{
    int nums1[ARR_SIZE] = {9, 2, 4, 6, 5, 1, 10, 3, 7, 8};
    int nums2[ARR_SIZE] = {8, 2, 5, 4, 6, 3, 12, 0, 10, 1};
    char* str = "Hi, i'm justin!!";
    char ch_val = 'A';

    printf("A char value: %c\n", ch_val);
    printf("A int value: %d\n", ch_val);
    printf("B char value: %c\n", ch_val + 1);
    printf("\n");

    print_string(str);
    printf("%c\n", str[0]);
    printf("string addr: %s\n", str);

    printf("\n");
    printf("Before bubble sort!\n");
    printArr(nums1);

    printf("\n");
    printf("After bubble sort!\n");
    bubble_sort(nums1, ARR_SIZE);
    printArr(nums1);

    printf("\n");
    printf("Before quick sort!\n");
    printArr(nums2);

    printf("\n");
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