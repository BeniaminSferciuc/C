#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#define arrMAX 50
#define matMax 30

int line, col;

int citire(int a[]);
void afisare(int a[], int b);
void crescator(int v[], int number);
void number(int v[], int a);

// Ex. 2)
int citireStr(char s[]);
void afisareStr(char s[]);
void displayWordNr(char s[], int a);
void display_alpha(char s[], int a);
void elimination(char s[], int a);

// Ex. 3)
void readMat(int mat[matMax][matMax]);
void displayMat(int mat[matMax][matMax]);
void displayMin(int mat[matMax][matMax]);
void displayChange(int mat[matMax][matMax]);
int suma(int mat[matMax][matMax], int x, int col);
int cmmdc(int mat[matMax][matMax], int l, int c, int i, int j);
int produs(int mat[matMax][matMax], int l, int j);
void elemente(int mat[matMax][matMax], int line, int col);

#endif // FUNCTIONS_H_INCLUDED
