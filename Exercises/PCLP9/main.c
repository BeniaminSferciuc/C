#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include "functions.h"

#define arrMAX 50

// Ex. 1)
/*-
int main()
{
    char menu;
    int arr[arrMAX];
    int nrElem;

    printf("\nC\tCitire\nA\tAfisare\nS\tSortati sirul crescator\nM\tModificare\nE\tNumarul care se repeta de cele mai multe ori\nI\tInfo autor\nX\tExit\n");

    do
    {
        printf("\nIntrodu o optiune: ");
        menu = toupper(getch());

        switch(menu)
        {
            case 'C':
                nrElem = citire(arr);
                break;
            case 'A':
                afisare(arr, nrElem);
                break;
            case 'S':
                crescator(arr, nrElem);
                break;
            case 'M':
                modificare(arr, nrElem);
                break;
            case 'E':
                number(arr, nrElem);
                break;
            case 'I':
                printf("Copyright! Name Author: Beniamin Sferiuc");
                break;
            case 'X':
                exit(-1);
            break;
            default:
                printf("Ati introdus o optiune incorecta!");
                break;
        }
    }
    while(1);

    return 0;
}
*/

// Ex. 2)
/*
int main(void)
{
    char menu;
    int lenStr;
    char str[100];

    printf("Meniu - Siruri de caractere\n");
    printf("\nC\tCitire\nA\tAfisare\nN\tNumarul de cuvinte\nO\tAfisare cuvinte in ordine alfabetica\nE\tEliminare consoane si afisare cuvantul initial si final\nI\tInfo autor\nX\tExit\n");

    do
    {
        printf("\nIntrodu o optiune: ");
        menu = toupper(getch());

        switch(menu)
        {
            case 'C':
                lenStr = citireStr(str);
                break;
            case 'A':
                afisareStr(str);
                break;
            case 'N':
                displayWordNr(str, lenStr);
                break;
            case 'O':
                display_alpha(str, lenStr);
                break;
            case 'E':
                elimination(str, lenStr);
                break;
            case 'I':
                printf("Copyright... Name Author: Beniamin Sferciuc!");
                break;
            case 'X':
                exit(-1);
                break;
            default:
                printf("\nAti introdus o comanda gresita!\n");
                break;
        }
    }
    while(1);
}
*/

// Ex. 3)


int main(void)
{
    char menu;
    int mat[matMax][matMax];

    printf("Optiuni:\nC\tCitire\nA\tAfisare\nL\tLinia cu suma elementelor minima si suma\nS\tInterschimbati coloanele pe care se afla elementul minim si maxim din matrice\nP\tProprietate\nI\tInfo Autor\nX\tExit\n");

    do
    {
        printf("\nIntroduceti o optiune: ");
        menu = toupper(getch());

        switch(menu)
        {
            case 'C':
                readMat(mat);
                break;
            case 'A':
                displayMat(mat);
                break;
            case 'L':
                displayMin(mat);
                break;
            case 'S':
                displayChange(mat);
                break;
            case 'P':
                elemente(mat, line, col);
                break;
            case 'I':
                printf("\nAuthor: Beniamin Sferciuc!");
                break;
            case 'X':
                exit(-1);
                break;
            default:
                printf("\nAti introdus o optiune gresita!");
                break;
        }
    }
    while(1);

    return 0;
}



