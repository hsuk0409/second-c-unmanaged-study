#include <stdio.h>
#include "my_string_study.h"

void reverse_string(char* str)
{
    char* start = str;
    char* end = str;

    while (*end != '\0') {
        ++end;
        if (*(end + 1) == '\0') {
            break;
        }
    }

    while (start < end) {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        ++start;
        --end;
    }
}

size_t strlength(const char* str)
{
    size_t size = 0;

    while (*str++ != '\0') {
        ++size;
    }

    return size;
}

size_t strlen_using_pointer(const char* str)
{
    const char* p = str;
    size_t result = 0;

    while (*p++ != '\0') {
    }

    result = p - str;
    printf("String length using pointer:: %lu\n", result);

    return result - 1;
}
