#include <stdio.h>
#include "arr.h"

int main(void)
{
    size_t i;

    print_arr();
    set_arr();
    print_arr();

    fill_all_column(19);
    print_arr();

    fill_all_row(19);
    print_arr();

    i = -1;
    printf("%lu\n", i++);
    printf("%lu\n", i);

    return 0;
}
