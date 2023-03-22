#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

// Introducere in pointeri cu date int

/*int main(void)
{
    int nr;
    int *p;

    nr = 101;
    p = &nr;

    printf("nr = %d\n", nr); // valoare 101
    printf("&nr = %d\n", &nr); // adresa 6522300 - hexa 0061FF1C
    printf("&nr = %p\n", &nr); // %p afiseaza in format hexa  
    printf("p = %d\n", p); // se afiseaza adresa lui nr
    printf("*p = %d\n", *p); // se afiseaza valoarea lui nr

    return 0;
}*/


// Introducere in pointeri cu date char

/*int main(void)
{
    char c1, c2;
    char *p1, *p2;

    c1 = 'A';
    c2 = 'X';

    p1 = &c1;
    p2 = &c2;

    printf("c1 = %c, &c1 = %d\n", c1, &c1);
    printf("c2 = %c, &c2 = %d\n", c2, &c2);
    printf("p1 = %d & *p1 = %c\n", p1, *p1);
    printf("p2 = %d & *p2 = %c\n", p2, *p2);

    return 0;
}
*/

// Introducere in pointeri cu date float

/*int main(void)
{
    float f1, f2;
    float *p1, *p2;

    f1 = 10.303;
    f2 = 7.77;

    p1 = &f1;
    p2 = &f2;
    // crtl + D pentru selectarea mai multor cuvinte exacte
    printf("f1 = %.3f, &f1 = %d\n", f1, &f1);
    printf("f2 = %.3f, &f2 = %d\n", f2, &f2);
    printf("p1 = %d, *p1 = %.3f\n", p1, *p1);
    printf("p2 = %d, *p2 = %.3f\n", p2, *p2);

    return 0;
}*/


// Introducere in pointere, initializare (NULL)

/*int main(void)
{
    int *p = NULL; // NULL initializeaza pointerul cu 0; !!!
    printf("p = %d\n", p);

    return 0;
}
*/

// Operatii cu pointeri
/*
void change(int *pointer)
{
    printf("p = %d\n", pointer);
    *pointer = 10;
}

int main(void)
{
    int nr = 99;

    printf("nr = %d\n", nr);
    printf("&nr = %d\n", &nr);
    change(&nr);
    printf("nr = %d\n", nr);

    return 0;
}
*/

// Pointeri si matrice de stringuri 
/*
int main(void)
{
    char *name[3] = {
        "Adam", 
        "Chris",
        "Deniel"
    };

    for (int i = 0; i < 3; ++i)
    {
        printf("%s\n", *(name + i));
    }

    return 0;
}
*/

// Un exercitiu cu pointeri - pointer ca parametrii a unei functii
/*
void swap(int *p1, int *p2)
{
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main(void)
{           
    // Inversarea valorilor unor variabile
    int nr1 = 55, nr2 = -7;

    swap(&nr1, &nr2);    

    printf("nr1 = %d\n", nr1);
    printf("nr2 = %d\n", nr2);

    return 0;
}

*/

// Pointeri si afisarea unui sir de caractere
/*
int main(void)
{
    char *x = "This is me in the future!";

    printf("%c\n", *x); // se afiseaza primul caracter din sir
    printf("%s\n", x); // se afiseaza intregul sir de caractere

    return 0;
}
*/
// Pointeri, tablouri si functii
/*
void citire_vector(int *pointer, int a[])
{
    printf("Introduceti numarul de elemente: ");
    scanf("%d", pointer);

    printf("Acum introduceti elementele vectorului: \n");
    for (int i = 0; i < *pointer; ++i)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void afisare_vector(int a, int b[])
{
    for (int i = 0; i < a; ++i)
    {
        printf("%d, ", b[i]);
    }
    printf("\b\b.");
}

int main(void)
{
    int arr[10];
    int nr_elem; 

    citire_vector(&nr_elem, arr);
    printf("\n");
    afisare_vector(nr_elem, arr);

    return 0;
}
*/

// Pointeri si alocarea dinamica
/*
int *get_arr(int *nr_elem) // pointer la functie pentru a return un vector
{
    printf("Introduceti dimensiunea vectorului: ");
    scanf("%d", nr_elem);

    int *vector = (int*)malloc((*nr_elem) * sizeof(int));  

    if(vector == NULL)
    {
        printf("Eroare la alocarea memoriei...\n");
        return NULL;
    }

    printf("Acum introduceti elementele vectorului: \n");
    for (int i = 0; i < *nr_elem; ++i)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    return vector;
}

void display_arr(int n, int arr[])
{
    printf("Elementele introduse sunt: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b.");
}

int main(void)
{
    int n; // variabila de tip intreg
    int *v; // variabila de tip intreg pointer

    v = get_arr(&n);
    printf("\n");
    display_arr(n, v);
    free(v);

    return 0;
}*/

// Matrice si pointeri
/*
int** get_mat(int *r, int *c)
{
    int **matrice;

    printf("Introduceti numarul de randuri: ");
    scanf("%d", r);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", c);

    matrice = (int**)malloc((*r) * sizeof(int));
    for (int i = 0; i < *r; ++i)
    {
        matrice[i] = (int*)malloc((*c) * sizeof(int));
    }

    if(matrice == NULL)
    {
        printf("Alocarea memoriei nu a avut loc...\n");
        return NULL;
    }

    printf("Introduceti elementele matricei: \n");
    for (int i = 0; i < *r; ++i)
    {
        for (int j = 0; j < *c; ++j)
        {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    return matrice;
}

void display_mat(int r, int c, int* mat[])
{
    printf("\nMatricea este: \n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int col, row;
    int **mat;

    mat = get_mat(&row, &col);
    display_mat(row, col, mat);
   
    for (int i = 0; i < row; ++i)
        free(mat[i]);
    free(mat);

    return 0;
}*/


//Cel mai mic divizor comun
/*
int main()
{
    int n , m; 
    scanf("%d %d", &n, &m); //n = 15; m = 81
    
    while(n != m) //15 != 81
    {
        if(n > m)
            n -= m; // n = 9 n = 3
        else 
            m -= n; // m = 66 m = 51 m = 36 m = 21 m = 6
    }
        printf("%d ", n);


    return 0;
}*/

char *get_str(int *size)
{
    printf("\nIntroduceti un sir de caractere: ");
    char *output;
    gets(output);

    *size = strlen(output);

    return output;
}

void display_str(int size, char s[])
{
    printf("%s\n", s);
}

int main(void)
{
    int len, menu;
    char *string;

    do
    {
        printf("1\tCitire\n2\tAfisare\n3\tExit\n\nIntroduceti o optiune: ");
        menu = toupper(getch());  

        switch(menu)
        {
            case 'A':
                string = get_str(&len);
                break;
            case 'B':
                display_str(len, string);
                break;
            case 'E':
                exit(-1);
                break;
            default:
                printf("Comanda gresita!\n");
                break;
        }
    } 
    while (1);


    return 0;
}