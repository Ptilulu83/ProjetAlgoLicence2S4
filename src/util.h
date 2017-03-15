#ifndef UTIL_H
#define UTIL_H

char * skip_separator(char * line,char separator);

int compare_int(const void *a,const void *b);

void sort_int(int * x);

void swap_tab_int(int * tab, int i, int j);

void create_Tab_Int(int * tab, int n);

char *itoa (int value, char *result, int base);

#endif
