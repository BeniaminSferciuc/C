#include <stdio.h>
#include <stdlib.h>
#include "functii.h"
#include <string.h>


// Ex. 2)
/*
int main()
{
    char menu;
    int *arr;
    int dim;

    printf("\nC\tCitire vector\nA\tAfisare vector\nB\tDeterminare numere pare is impare\nM\tDeterminare media aritmetica a elementelor din vector\nI\tInfo autor\nE\tExit\n");

    do
    {
        printf("\nIntroduceti o optiune: ");
        menu = toupper(getch());

        switch(menu)
        {
            case 'C':
                arr = get_arr(&dim);
                break;
            case 'A':
                display_arr(dim, arr);
                break;
            case 'B':
                get_nr(dim, arr);
                break;
            case 'M':
                media_aritmetica(dim, arr);
                break;
            case 'I':
                printf("Author: Beniamin Sferiuc");
                break;
            case 'E':
                exit(-1);
                break;
            default:
                printf("\nAti introdus o comanda gresita.\n");
                break;
        }
    }
    while(1);

    return 0;
}
*/

// Ex. 3)
/*
int main(void)
{
    int line, col;
    int **mat;

    mat = get_mat(&line, &col);
    display_mat(line, col, mat);

    free(mat);
    for(int i = 0; i < line; i++)
    {
        free(mat[i]);
    }

    return 0;
}
*/

// Ex. 4)

int main(void)
{
    char menu;
    int row, col, nr;
    int **mat;

    printf("\nC\tCitire matrice\nA\tAfisare matrice\nL\tInlocuieste numere impare cu 0\nN\tNumarul de numere mai mari decat 5\nT\tVector ce contine nr mai mari decat 5\nI\tInfo autor\nX\tExit\n");

    do
    {
        printf("\nIntroduceti o optiune: ");
        menu = toupper(getch());
        printf("\n");
        switch(menu)
        {
            case 'C':
                mat = get_mat(&row, &col);
                break;
            case 'A':
                display_mat(row, col, mat);
                break;
            case 'L':
                make_replace(row, col, mat);
                break;
            case 'N':
                nr = get_number_biger(row, col, mat);
                printf("In matrice sunt \"%d\" mai mari decat 5.", nr);
                break;
            case 'T':
                get_vector(row, col, mat);
                break;
            case 'I':
                printf("Autor: Beniamin Sferiuc!");
                break;
            case 'X':
                exit(-1);
                break;
            default:
                printf("Ati introdus o comanda gresita!");
                break;
        }
    }
    while(1);

    return 0;
}






