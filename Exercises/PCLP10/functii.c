#include "functii.h"

//Citire vector dinamic
int *get_arr(int *d)
{
    printf("\nIntroduceti dimensiunea vectorului: ");
    scanf("%d", d);

    int *vector = (int*)malloc((*d) * sizeof(int));

    printf("Acum introduceti elementele vectorului: \n");
    for(int i = 0; i < *d; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vector[i]);
    }

    return vector;
}

//Afisare vector
void display_arr(int d, int arr[])
{
    printf("\nVectorul este: \n");
    for(int i = 0; i < d; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b.");
}

// Determinare numere pare is impare
void get_nr(int d, int arr[])
{
    int par= 0, impar = 0;

    for(int i = 0; i < d; i++)
    {
        if(arr[i] % 2 == 0)
            par++;
        else
            impar++;
    }

    if(par == 1)
        printf("\nIn vector este un singur numar par.\n");
    else
        printf("\nIn vector sunt %d numere pare.\n", par);

     if(impar == 1)
        printf("\nIn vector este un singur numar impar\n.");
    else
        printf("\nIn vector sunt %d numere impare.\n", impar);

    for(int i = 0; i < d; i++)
    {
        if(arr[i] % 2 == 0)
            printf("v[%d] = %d - numar par\n", i, arr[i]);
        else
            printf("v[%d] = %d - numar impar\n", i, arr[i]);
    }
}

//Determinare medie aritmetica a elementelor din vector
void media_aritmetica(int d, int arr[])
{
    float sum = 0;
    printf("Media aritmetica a elementelor vectorului este: ");
    for(int i = 0; i < d; i++)
    {
        sum = sum + arr[i];
    }
    printf("%.1f", sum/d);
}

//Citire matrice
int** get_mat(int *l, int *c)
{
    printf("Introduceti numarul de linii si coloane: ");
    scanf("%d%d", l, c);

    int **matrice = (int**)malloc((*l) * sizeof(int));
    for(int z = 0; z < *l; z++)
    {
        matrice[z] = (int*)malloc((*c) * sizeof(int));
    }

    printf("Introduceti elementele matricei:\n");
    for(int i = 0; i < *l; i++)
    {
        for(int j = 0; j < *c; j++)
        {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    return matrice;
}

// Afisare matrice
void display_mat(int line, int col, int* mat[])
{
    printf("\nMatricea este: \n");
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void make_replace(int line, int col, int* mat[])
{
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mat[i][j] % 2 != 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int get_number_biger(int line, int col, int* mat[])
{
    int nr = 0;
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mat[i][j] > 5)
            {
                nr++;
            }
        }
    }

    return nr;
}

int* get_vector(int row, int col, int *mat[])
{
    int v[100];
    int iter = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mat[i][j] > 5)
            {
                v[iter++] = mat[i][j];
            }
        }
    }

    printf("Vectorul rezultat este: ");
    for(int i = 0; i < iter; i++)
    {
        printf("%d, ", v[i]);
    }
    printf("\b\b.");

    return v;
}









