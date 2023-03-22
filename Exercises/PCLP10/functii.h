#ifndef FUNCTII_H_INCLUDED
#define FUNCTII_H_INCLUDED

#define arrMax 30

int *get_arr(int *d);
void display_arr(int d, int arr[]);
void get_nr(int d, int arr[]);
void media_aritmetica(int d, int arr[]);
int** get_mat(int *l, int *c);
void display_mat(int line, int col, int* mat[]);
void make_replace(int line, int col, int* mat[]);
int get_number_biger(int line, int col, int* mat[]);
int* get_vector(int row, int col, int *mat[]);

#endif // FUNCTII_H_INCLUDED
