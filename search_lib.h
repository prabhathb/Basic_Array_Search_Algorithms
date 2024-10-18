/*
this header file delcares the functions defined in search_lib.c
*/

#ifndef SEARCH_LIB
#define SEARCH_LIB

int sequential_search_no_appended_key(int x[],int k,int array_size);
int sequential_search_appended_key(int x[],int k,int array_size);
int binary_search(int x[], int k,int array_size);

#endif