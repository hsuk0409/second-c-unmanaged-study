#include <stdio.h>

void print_arr(const char arr[][10]);

int main(void)
{
    {
        char chars[50];
        const char* chars_p[3];
        size_t i;

        chars_p[0] = &chars[8];
        chars_p[1] = &chars[33];

        printf("chars_p[0].. ");
        for (i = 0; i < sizeof(chars_p[0]); ++i) {
            if (chars_p[0][i] != '\0') {
                printf("i:: %lu ", i);
            }
        }
        printf("\n");

        printf("chars_p[1].. ");
        for (i = 0; i < sizeof(chars_p[1]); ++i) {
            if (chars_p[1][i] != '\0') {
                printf("i:: %lu ", i);
            }
        }
        printf("\n");
    }

    {
        char arr[2][10] = {
            "Name: ",
            "Justin!"
        };
        char str1[] = "Char array1";
        char* ptr_str2 = "Char array2";

        print_arr(arr);

        printf("String array sizeof:: %lu\n", sizeof(str1));
        printf("String array address:: %p\n", (void*)&str1);

        printf("String pointer sizeof:: %lu\n", sizeof(ptr_str2));
        printf("String pointer address:: %p\n", (void*)&ptr_str2);
    }

    return 0;
}

void print_arr(const char arr[][10])
{
    printf("First chars:: %s\n", arr[0]);
    printf("Second chars:: %s\n", arr[1]);
}
