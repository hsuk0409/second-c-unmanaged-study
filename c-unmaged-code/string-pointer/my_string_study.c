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

size_t strlength(char* str)
{
    size_t size = 0;

    while (*str++ != '\0') {
        ++size;
    }

    return size;
}
