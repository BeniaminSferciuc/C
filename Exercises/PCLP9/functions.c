#include "functions.h"

// Citire vector
int citire(int a[])
{
    int nrVect;

    do
    {
        printf("\nIntroduceti numarul de elemente din vector: ");
        scanf("%d", &nrVect);
    }
    while(nrVect < 1 || nrVect > arrMAX);

    for(int i = 0; i < nrVect; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }

    return nrVect;
}

// Afisare vector
void afisare(int a[], int b)
{
    printf("\nElementele vectorului sunt: ");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}

// Sortare crescatoare
void crescator(int v[], int number)
{
    int aux = 0;

    for (int i = 0; i < number; ++i)
    {
        for (int j = i + 1; j < number; ++j)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("\nElementele vectorului in ordine crescatoare:\n");
    for (int i = 0; i < number; ++i)
    {
        printf("%d ", v[i]);
    }
}

// Elemente situare pe pozitii pare + 1, impare - 1
void modificare(int v[], int number)
{
    for (int i = 0; i < number; ++i)
    {
        if(i%2 == 0)
        {
            v[i] = v[i] + 1;
        }
        else
        {
            v[i] = v[i] - 1;
        }
    }

    printf("\nElementele vectorului modificate sunt: \n");
    for (int i = 0; i < number; ++i)
    {
        printf("%d ", v[i]);
    }
}

// Afisare elementul care are cel mai mare nr de aparitii
void number(int v[], int a)
{
    int vect[arrMAX], b, maxx=0;

    for(int i = 0; i < a; i++)
    {
        b = 1 ;
        for(int j = i + 1; j < a; j++)
        {
            if(v[i] == v[j])
                b++;
        }
        vect[i] = b;
    }

    for(int i = 0; i < a; i++)
    {
        if(vect[i] > maxx)
        {
            maxx = vect[i];
        }
    }

    for(int i = 0; i < a; i++)
    {
        if(maxx == vect[i])
        {
            printf("\nElementul cu cele mai multe aparitii in vector este: %d\n", v[i]);
        }

    }
}

// Citire sir de caractere
int citireStr(char s[])
{
    int nr;
    printf("\nIntroduceti un sir de caractere:\n");
    gets(s);

    return nr = strlen(s);
}

// Afisare sir de caractere
void afisareStr(char s[])
{
    printf("\nSir introdus este: \n");
    puts(s);
}

// Afisare nr de cuv din sir
void displayWordNr(char s[], int a)
{
    int arr[100];
    int aux = 1;

    for(int i = 0; i < a; i++)
    {
        if(s[i] == ' ' && s[i + 1] >= 65 && s[i + 1] <= 126)
            aux++;
    }

    printf("In sir sunt \"%d\" cuvinte", aux);
}

// Afisare cuvinte in ordin alfabetica

void display_alpha(char s[], int a)
{
    char word[20][20];
    int help = 0;
}

//Eliminare consoane din cuvintele care incept cu vocala

void elimination(char s[], int a)
{
    char d = " ";
    char *arr1 = strtok(s, d);
    printf("%s\n", arr1);
}


void readMat(int mat[matMax][matMax])
{
    do
    {
        printf("\nIntroduceti numarul de linii: ");
        scanf("%d", &line);
    }
    while(line > matMax || line < 0);

    do
    {
        printf("Introduceti numarul de coloane: ");
        scanf("%d", &col);
    }
    while(line > matMax || line < 0);

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMat(int mat[matMax][matMax])
{
    printf("\n");
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void displayMin(int mat[matMax][matMax])
{
    int sum, save;

    int min = 999999;

    for(int i = 0; i < line; i++)
    {
        sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum = sum + mat[i][j];
        }
        if(sum < min)
        {
            min = sum;
            save = i;
        }
    }

    printf("\nSuma minima a elementelor este: %d\n", min);
    printf("Elementele linie sunt: ");

    for(int i = 0; i < col; i++)
    {
        printf("%d ", mat[save][i]);
    }
}

void displayChange(int mat[matMax][matMax])
{
    int mat1[matMax][matMax];

    int min = 999999, max = -999999;
    int save_1, save_2;

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mat[i][j] < min)
            {
                 min = mat[i][j];
                 save_1 = j;
            }

            if(mat[i][j] > max)
            {
                 max = mat[i][j];
                 save_2 = j;
            }
        }
    }

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            mat1[i][j] = mat[i][j];
        }
    }


    for(int j = 0; j < col; j++)
    {
        mat1[j][save_1] = mat[j][save_2];
    }

    for(int j = 0; j < col; j++)
    {
        mat1[j][save_2] = mat[j][save_1];
    }

    printf("\nMin: %d\nMax: %d\n", min, max);
    printf("Col-min: %d\nCol-max: %d\n", save_1, save_2);

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
}

int suma(int mat[matMax][matMax], int x, int col)
{
    int s = 0;
    for(int i = 0; i < col; i++)
    {
        s = s + mat[x][i];
    }
    return s;
}

int produs(int mat[matMax][matMax], int l, int j)
{
    int p = 1;
    for(int i = 0; i < l; i++)
        p = p * mat[i][j];

    return p;
}

int cmmdc(int mat[matMax][matMax], int l, int c, int i, int j)
{
    int s,p;
    s = suma(mat, i, c);
    p = produs(mat, l, j);
    while(s != p)
    {
        if(s > p)
            s = s - p;
        else
            if(s < p)
                p = p - s;
    }
    return s;
}

void elemente(int mat[matMax][matMax], int line, int col)
{
    int ok, cm;
    ok = 0;

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cm = cmmdc(mat, line, col, i, j);
            if(mat[i][j] = cm)
            {
                printf("Elementul %d indeplineste conditia.\n", mat[i][j]);
                ok = 1;
            }
        }
    }
    if(ok == 0)
        printf("Nu exista astfel de elemente.\n");

}



