#include <stdio.h>
#include <string.h>

void reverse_string(const char* str);
int compare_pointer(const char* str1, const char* str2);

int main(void)
{
    char* tmp_str = "Hi, my name is justin!";
    char str_cpy[23];

    strncpy(str_cpy, tmp_str, 22);
    str_cpy[22] = '\0';
    
    reverse_string(str_cpy);
    printf("111 Reversed string: %s\n", tmp_str);
    printf("222 Reversed string: %s\n", str_cpy);

    return 0;
}

void reverse_string(const char* str)
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

int compare_pointer(const char* str1, const char* str2)
{
    return -1;
}
