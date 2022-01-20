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
    char tmp;

    while (*end != '\0') {
        printf("%c ", *end);
        ++end;
    }
    --end;

    printf("\n");
    printf("End of string: %c\n", *end);
    printf("Is equal start to end? %d\n", start == end);

    while (start != end) {
        tmp = *start;
        *end = *start;
        *start = tmp;
        printf("%s\n", str);
        if (start == end) break;
        ++start;
        --end;
    }
    printf("Final tmp_str:: %s\n", str);
}
