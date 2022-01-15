#include <stdio.h>
#include "arr.h"

int main(void)
{
    print_arr();
    set_arr();
    print_arr();

    fill_all_column(19);
    print_arr();

    fill_all_row(19);
    print_arr();

    return 0;
}
