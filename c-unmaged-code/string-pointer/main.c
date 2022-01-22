#include <stdio.h>

void reverse_string(char* str);

int main(void)
{
    char* tmp_str = "Hi, my name is justin!";
    char tmp_str2[25] = "Hi, my name is justin!";
    reverse_string(tmp_str2);
    printf("111 Reversed string: %s\n", tmp_str);
    printf("222 Reversed string: %s\n", tmp_str2);

    return 0;
}

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
