#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "my_string_study.h"

void reverse_string(char* str);
int compare_pointer(char* str);

int main(void)
{
    char* tmp_str = "Hi, my name is justin!";
    char str_cpy[23];

    {
        const char* mult_delim = " ,!";
        char str_strtok[] = "!,I    am  a boy,  and    you   are a   girl!";
        const char* str = "!,I    am  a boy,  and    you   are a   girl!";
        char* last_ptr = (char*)str + strlength(str) - 1;
        char* token = strtok(str_strtok, mult_delim);

        printf("Last char:: %c\n", *last_ptr);
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, mult_delim);
        }

    }

    {
        const char* str = "aaaaa";
        size_t str1_len = strlength(str);
        size_t str2_len = strlen_using_pointer(str);

        printf("String1 length:: %lu\n", str1_len);
        printf("String2 length:: %lu\n", str2_len);
        assert(str1_len == str2_len);
    }

    {
        char str[] = "Tmp_v1";
        char* token;

        token = strtok(str, "_");

        printf("Token:: %s\n", token);
    }

    printf("String pointer size:: %lu\n", sizeof(tmp_str));
    printf("String array size:: %lu\n", sizeof(str_cpy));

    strncpy(str_cpy, tmp_str, 22);
    str_cpy[22] = '\0';
    printf("Copy string pointer to string array:: %s\n", str_cpy);
    printf("String pointer size:: %lu\n", sizeof(tmp_str));
    printf("String array size:: %lu\n", sizeof(str_cpy));

    reverse_string(str_cpy);
    printf("111 Reversed string: %s\n", tmp_str);
    printf("222 Reversed string: %s\n", str_cpy);

    compare_pointer(str_cpy);

    return 0;
}

int compare_pointer(char* str)
{
    char* str_p1 = str;
    char* str_p2 = str;
    size_t i;

    for (i = 0; i < 3; ++i) {
        ++str_p2;
    }

    printf("str1:: %s\n", str_p1);
    printf("str2:: %s\n", str_p2);
    printf("str2 - str1:: %ld\n", str_p2 - str_p1);
    printf("str1 - str2:: %ld\n", str_p1 - str_p2);
    printf("str1 + 3 == str2:: %d\n", str_p1 + 3 == str_p2);

    return -1;
}
