#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Laborator 10 - Functii

// (3.) Probleme
// Ex. 1)
/*
int factorial(int a);
int fibonacci(int b);
int power(int c, int d);
void prim(int d);
void cmmdc(int a, int b);

int main(void)
{
	int swt;

	printf("\n1\tn!\n2\tFibonacci\n3\tPutere\n4\tPrim\n5\tCmmdc\n6\tExit\n");

	do
	{
		int nr, nr1;

		printf("\nIntroduceti o comanda: ");
		scanf("%d", &swt);
		switch(swt)
		{
			case 1: 
				printf("Introduceti un numar: ");
				scanf("%d", &nr);
				printf("%d! = %d\n", nr, factorial(nr));
				break;
			case 2:
				printf("Introduceti un numar: ");
				scanf("%d", &nr);
				printf("Numarul din sirul Fibonacci de pe pozitia %d este %d\n", nr, fibonacci(nr));
				break;
			case 3:
				printf("Introduceti doua numere: ");
				scanf("%d%d", &nr, &nr1);
				printf("%d^%d = %d\n", nr, nr1, power(nr, nr1));
				break;
			case 4:
				printf("Introduceti un numar: ");
				scanf("%d", &nr);
				prim(nr);
				break;
			case 5:
				printf("Introduceti doua numere: ");
				scanf("%d%d", &nr, &nr1);
				cmmdc(nr, nr1);
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Ati introdus o comanda gresita. Introduceti o alta comanda: \n");
				break;	
		}
	}
	while(swt != 6);
	

	return 0;
}

int factorial(int a)
{
	int result = 1;
	
	for (int i = 1; i <= a; ++i)
	{
		result = result * i;
	}
	return result;
}

int fibonacci(int b)
{
	int termen1 = 0, termen2 = 1, nextTerm = 0; // 0 1 1 2 3 5 8 13 21 34 55 89

    if(b == 0 || b == 1)
        return b;
    else
        nextTerm = termen1 + termen2;

    for (int i = 3; i <= b; ++i)
    {
        termen1 = termen2;
        termen2 = nextTerm;
        nextTerm = termen1 + termen2;
    }
    return termen2;	
}

int power(int c, int d)
{
	int result = c;

	for (int i = 1; i < d; ++i)
	{
		result = result * c;
	}

	return result;
}

void prim(int d)
{
	int prim = 0;

	for (int i = 2; i < d; ++i)
	{
		if(d % 2 == 0)
			prim = 1;
	}

	if (prim == 0)
		printf("Numarul este prim!\n");
	else if (prim == 0)
		printf("Numarul introdus nu se potriveste!");
	else
		printf("Numarul nu este prim!\n");
}

void cmmdc(int a, int b)
{
	int result;

	for (int i = 2; i < a; ++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			result = i;
		}
	}
	printf("Cmmdc al numerelor %d si %d = %d\n", a, b, result);
}
*/

// Ex. 2) 
/*
#define MAX 50

int citire(int x[]);
void afisare(int nr, int x[]);
float sum(int nr, int x[]);
void search(int nr, int x[]);
int pare(int nr, int x[]);
int divisible(int nr, int x[]);
void crescator(int nr, int x[]);
void info_autor();

int main(void)
{
	int v[MAX], n, stoc;
	char option;

	printf("\nC\tCitire\nA\tAfisare\nS\tSuma elementelor\nM\tMedia elementelor\nE\tCautare element in vector\nP\tNumarul elementelor pare\nN\tNumarul elementelor divizibile cu 3\nV\tVerificare daca este sortat crescator\nI\tInfo autor\nX\tExit\n\n");

	do
	{
		printf("\nIntroduceti o optiune: ");
		option = toupper(getch());
		printf("\n");
		
		switch (option)
		{
			case 'C':
				n = citire(v);
				break;
			case 'A':
				afisare(n, v);
				break;
			case 'S':
				printf("Suma elementelor vectorului este: %.0f\n", sum(n, v));
				break;
			case 'M':
				printf("Media aritmetica a elementelor vectorului este: %.1f\n", sum(n, v)/n);
				break;
			case 'E':
				search(n, v);
				break;
			case 'P':
				stoc = pare(n, v);
				if (stoc > 1)
					printf("In vector exista %d elemente pare.\n", stoc);
				else if (stoc == 1)
					printf("In vector exita un singur element par.\n");
				else if (stoc == 0)
					printf("In vector nu exita niciun element par.\n");
				break;
			case 'N':
				printf("Exista %d numere divizibile cu 3.\n", divisible(n, v));
				break;
			case 'V':
				crescator(n, v);
				break;
			case 'I':
				info_autor();
				break;
			case 'X':
				exit(0);
				break;
			default:
				printf("Ati introdus o comanda gresita!\n");
				break;					
		}
	}
	while (1);

	return 0;
}

int citire(int x[])
{
	int nr;
	printf("\nIntrodu numarul de elemente: ");
	scanf("%d", &nr);
	for (int i = 0; i < nr; ++i)
	{
		printf("v[%d] = ", i);
		scanf("%d", &x[i]);
	}
	return nr;
}

void afisare(int nr, int x[])
{
	for (int i = 0; i < nr; ++i)
	{
		printf("v[%d] = %d\n", i, x[i]);
	}
}

float sum(int nr, int x[])
{
	float sum = 0;

	for (int i = 0; i < nr ; ++i)
	{
		sum = sum + x[i];
	}

	return sum;
}

void search(int nr, int x[])
{
	int search, aux = 0;

	printf("Introdu un numar: ");
	scanf("%d", &search);

	for (int i = 0; i < nr; ++i)
	{
		if(search == x[i])
			aux = 1;
	}	

	if (aux == 1)
		printf("Numarul %d a fost gasit printre elementele vectorului.\n", search);
	else
		printf("Numarul %d nu a fost gasit printre elementele vectorului.\n", search);
}

int pare(int nr, int x[])
{
	int par = 0;

	for (int i = 0; i < nr ; ++i)
	{
		if(x[i] % 2 == 0)
			par++;
	}

	return par;
}

int divisible(int nr, int x[])
{
	int div = 0;

	for (int i = 0; i < nr; ++i)
	{
		if(x[i] % 3 == 0)
			div++;
	}

	return div;
}

void crescator(int nr, int x[])
{
	int aux = 0;

	for (int i = 0; i < nr - 1; ++i)
	{
		if (x[i] > x[i + 1])
		{
			aux = 1;
		}
	}

	if (aux == 0)
		printf("Vectorul este crescator.\n");
	else if (aux == 1)
		printf("Vectorul nu este crescator.\n");
}

void info_autor()
{
	printf("Copyright! Autor: Beniamin Sferciuc!\n");
}
*/

// Ex. 3)
/*
#define line_MAX 30
#define col_MAX 30
static int line, col;
static int mat1[line_MAX][col_MAX];

void get_arr(int arr[line_MAX][col_MAX]);
void put_arr(int arr[line_MAX][col_MAX]);
void show_simetric(int arr[line_MAX][col_MAX]);
void cut_line(int arr[line_MAX][col_MAX]);
void cut_col(int arr[line_MAX][col_MAX]);
void add_line(int arr[line_MAX][col_MAX]);
void add_col(int arr[line_MAX][col_MAX]);


int main(void)
{
	int mat[line_MAX][col_MAX];

	printf("\n1\tCitire\n2\tAfisare\n3\tVerificare daca este simetrica\n4\tTaie linie\n5\tTaie coloana\n6\tAdauga line\n7\tAdauga coloana\n8\tInfo autor\n9\tExit\n\n");

	do
	{
		int swt;

		fflush(stdin);
		printf("\nIntroduceti optiunea: ");
		scanf("%d", &swt);

		switch(swt)
		{
			case 1:
				get_arr(mat);
				break;
			case 2:
				put_arr(mat);
				break;
			case 3:
				show_simetric(mat);
				break;
			case 4:
				cut_line(mat);
				break;
			case 5:
				cut_col(mat1);
				break;
			case 6:
				add_line(mat1);
				break;
			case 7:
				add_col(mat1);
				break;
			case 8:
				printf("Copyright! Name author: Beniamin Sferciuc!\n");
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\nComanda incompatibila!\n");
				break;
		}
	}
	while(1);
	
	return 0;
}

void get_arr(int arr[line_MAX][col_MAX])
{
	do
	{
		printf("Introduceti numarul de linii: ");
		scanf("%d", &line);
	}
	while(line < 1 || line > line_MAX);
	
	do
	{
		printf("Introduceti numarul de coloane: ");
		scanf("%d", &col);
	} 
	while (col < 1 || col > col_MAX);
	
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void put_arr(int arr[line_MAX][col_MAX])
{
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void show_simetric(int arr[line_MAX][col_MAX])
{
	int a = 0;
	for (int i = 1; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
			{
				if (arr[i][j] != arr[j][i])
				{
					a = 1;
				}
			}	
	}

	if (a == 1)
		printf("Matricea nu este simetrica.\n");
	else
		printf("Matricea este simetrica.\n");
}

void cut_line(int arr[line_MAX][col_MAX])
{
	printf("Prima linie din matrice este taiata.\nMatricea rezultata este: \n\n");

	// Anulare prima linie

	for (int i = 1; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			mat1[i - 1][j] = arr[i][j];
		}
	}

	// Afisare matrice rezultata

	for (int i = 0; i < line - 1; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
}

void cut_col(int arr[line_MAX][col_MAX])
{
	printf("Prima coloana din matrice este taiata.\nMatricea rezultata este:\n\n");

	// Anulare prima coloana

	for (int i = 0; i < line; ++i)
	{
		for (int j = 1; j < col; ++j)
		{
			mat1[i][j - 1] = arr[i][j];
		}
	}

	// Afisare matrice rezultata

	for (int i = 0; i < line - 1; ++i)
	{
		for (int j = 0; j < col - 1; ++j)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
}

void add_line(int arr[line_MAX][col_MAX])
{
	printf("Adauga o linie la matricea existenta.\n");

	for (int i = line - 1; i < line; ++i)
	{
		for (int j = 0; j < col - 1; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col - 1; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void add_col(int arr[line_MAX][col_MAX])
{
	printf("Adauga o coloana la matricea existenta.\n");

	for (int i = 0; i < line; ++i)
	{
		for (int j = col - 1; j < col; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/

// Ex. 4)
/*
void citire(char s[]);
void afisare(char s[]);
void find(char str[]);
void replace(char s[]);

int main(void)
{
	char str[100];
	char menu;

	printf("\nC\tCitire sir de caractere\nA\tAfisare sir de caractere\nF\tCautare cuvant in sir\nG\tInlocuirea semenelor de punctuatie cu \'x\'\nI\tInfo autor\nX\tIesire\n");

	do
	{
		printf("\nIntroduceti o optiune: ");
		menu = toupper(getch());

		switch (menu)
		{
			case 'C':
				citire(str);
				break;
			case 'A':
				afisare(str);
				break;
			case 'F':
				find(str);
				break;
			case 'G':
				replace(str);
				break;
			case 'I':
				printf("\nCopyright! Name author: Beniamin Sferciuc! Sa traiti domn' profesor!\n");
				break;
			case 'X':
				exit(-1);
				break;
			default:
				printf("\nComanda inexistenta!\n");
				break;
		}
	}
	while (1);
	
	return 0;
}

void citire(char s[])
{
	printf("\nIntrodu un sir de caractere: ");
	gets(s);
}

void afisare(char s[])
{
	printf("\n");
	puts(s);
}

void find(char s[])
{
	char word[10];

	printf("\nCe cuvant doriti sa cautati: ");
	gets(word);

	if(strstr(s, word))
		printf("Cuvantul a fost gasit.\n");
	else
		printf("Cuvantul NU a fost gasit.\n");

	printf("%s\n", strstr(s, word));
}

void replace(char s[])
{
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] >= 33 && s[i] <= 47 || s[i] >= 58 && s[i] <= 63)
		{
			s[i] = 'x';
		}
	}

	for (int i = 0; i < strlen(s); ++i)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
*/

// (4.) Probleme - functii recursive

// Ex. 5)
/*
long long factorial(int n);

int main(void)
{
	int nr;

	printf("Introduceti un numar pozitiv: ");
	scanf("%d", &nr);

	long long store_value;

	store_value = factorial(nr);

	printf("%lld! = %lld\n", nr, store_value);

	return 0;
}

long long factorial(int n)
{
	int f;
	if(n == 0)
		f = 1;
	else
		f = n * factorial(n - 1);

	return f;
}*/

// Ex. 6)
/*
int Fibonacci(int n)
{
	if (n <= 1) 
		return n; 
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

int main()
{
	int n, sum = 0;

	printf("Introduceti un numar: ");
	scanf("%d", &n);
	printf("Fibonacci series: ");

	while(Fibonacci(sum) <= n)
	{
		printf("%d ", Fibonacci(sum));
		sum++;
	}

	return 0;
}*/

// Ex. 7) Sa se calculeze recursiv x^n
/*
int calc_pow(int a, int b)
{
	if(b != 0)
		return (a * calc_pow(a, b  - 1));
	else 
		return 1;
}

int main()
{
	int x, n;
	
	printf("Introduceti un numar baza: ");
	scanf("%d", &x);

	printf("Introduceti un numar exponential: ");
	scanf("%d", &n);

	printf("%d^%d = %d", x, n, calc_pow(x, n));

	return 0;
}*/

// Ex. 8)

// Ex. 9) Maximul elementelor unui vector
