#include <stdio.h>

void reverse_string(char* str);

int main(void)
{
    char* tmp_str = "Hi, my name is justin!";
    reverse_string(tmp_str);
    printf("Reversed string: %s\n", tmp_str);

    return 0;
}

void reverse_string(char* str)
{
    char* start = str;
    char* end = str;

    while (*end != '\0') {
        ++end;
    }
    --end;

    printf("\n");
    printf("String: %s\n", str);
    printf("Start of string: %c\n", *start);
    printf("End of string: %c\n", *end);

    printf("Address of start: %s\n", start);
    printf("Address of end: %c\n", *(--end));

    while (&start != &end) {
        printf("%c ", (*end)--);
    }
    printf("\n");
}
