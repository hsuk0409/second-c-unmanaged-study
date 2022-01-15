#ifndef ARR_H
#define ARR_H

#include <stdio.h>

static int arrArr[20][20];

void print_arr(void);
void set_arr(void);
void fill_all_row(const size_t row);
void fill_all_column(const size_t col);

#endif
