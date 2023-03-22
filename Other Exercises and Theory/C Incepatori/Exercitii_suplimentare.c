#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <conio.h>

//										Palindrom
/*
int main()
{
	int number, copy_number, panlindorm = 0;

	printf("Introdu un numar oarecare: ");
	scanf("%d", &number);
	copy_number = number;

	while(number != 0)
	{
		panlindorm = (panlindorm * 10) + number % 10;
		number = number / 10;
	}

	if (copy_number == panlindorm)
	{
		printf("Numarul este un panlindorm!");
	}
	else
	{
		printf("Numarul nu este un panlindorm!");
	}
	return 0;
}
*/
//_________________________________________________________
 
//										Radicali
/*
int main()
{	
	float x;
	printf("Enter a number: ");
	scanf("%f", &x);
	printf("Radicalul din %.1f este %.2f", x, sqrt(x));
	return 0;
}
*/
//_________________________________________________________

//								0 < interval < 100
/*
int main()
{
	int interval = 0;
	do
	{
	printf("Introduceti un numar oarecare: ");
	scanf("%d", &interval);
	}
	while(interval < 0 || interval > 100);
	return 0;
}
*/
//________________________________________________________

//											Tablouri
/*
int main()
{
	short int tablou [] = {35,351,453,945,652,643,563,342,143,765,325,647,3252,632,254,6,76,7,687,8,6,98,9,8};
	int i;
	for(i = 0; i < 24; i++)
	{
		printf("%d|", tablou[i]);
	}
	return 0;
}
*/
//_________________________________________________________

//							pre si post incrementare
/*
int main()
{
	float a = 1, b = 2;
	float x, y;
	x = a++;
	y = ++b;
	printf("x = %.0f\na = %.0f\n", x, a); //x=1 a=2
	printf("y = %.0f\nb = %.0f\n", y, b); //y= 3 b=3
	return 0;
}
*/
//________________________________________________________

//								Switch si puteri 
/*
int main() 
{
  int n, pre = 1;

  printf("Introduceti o valoare intre 0 si 5: ");
  scanf("%d", &n);
  
  switch (n) // fără break, continuă la următoarea instrucţiune
  {
    case 5:
      pre *= 2; //pre = 2  
    case 4:
      pre *= 2; // pre = 4
    case 3:
      pre *= 2; // pre = 8
    case 2:
      pre *= 2; // pre = 16
    case 1:
      pre *= 2; // pre = 32
    case 0:
      printf("2 la puterea %d este %d\n", n, pre);
      break;
    default:
      printf("Valoare invalida\n");
  }

  return 0;
}
*/
//_________________________________________________________

//					 				Tabla inmultirii
/*
int main()
{
	for(int i = 1; i <= 10; i++)
	{
		for(int n = 1; n < 11; n++)
		{	
			int result = i * n;
			printf("%d * %d = %d", i, n , result);
		}
		printf("\n");
	}

	return 0;
}
*/
//_________________________________________________________

//							Numere prime si divizori
/*

int main(void)
{
	int number, i;
	int nr_prim = 1;

	printf("Introdu un numar natural: ");
	scanf("%d", &number);

	for (i = 2; i < number; i++)
	{
		if(number % i == 0)
			nr_prim = 0;
	}

	if(number >= 1 && nr_prim == 1)
		printf("Numarul %d este numar prim.", number);
	else if(nr_prim == 0)
		printf("Numarul %d NU este numar prim.", number);
	else if(number == 0)
		printf("Ati introdus 0.");
	else if(number < 0)
		printf("Ati introdus un numar negativ.");

	return 0;
}
*/
//_________________________________________________________

//									Min & Max
/*
int main()
{
	int a[] = {2,5,6,1,8,312,68,12,65,857,312,635,213};
	int max = a[0];
	int min = a[0];

	for(int i = 1; i < 13; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
		
		if(min > a[i])
		{
			min = a[i];
		}
	}

	printf("Numar maxim din sirul dat este: %d\n", max);	
	printf("Numar minim din sirul dat este: %d", min);

	return 0;
}
*/
//_________________________________________________________

//							Numere pare si impare
/*
int main()
{
	int i;
	for(i = -10; i < 10; i++)
	{
		if(i % 2 != 0 && i < 0)
		{
			printf("i = %d (impar)(negativ)\n", i);
		}
		else if(i % 2 == 0 && i < 0)
		{
			printf("i = %d (par)(negativ)\n", i);
		}
		else if(i % 2 != 0 && i > 0 )
		{
			printf("i = %d (impar)(pozitiv)\n", i);
		}
		else if(i % 2 == 0 && i > 0)
		{
			printf("i = %d (par)(pozitiv)\n", i);
		}
	}
	
	return 0;
}
*/
//__________________________________________________________

//					Transformare din zecimal in binar
/*
int main()
{
	int zecimal, i;
	int nr;
	
	printf("Transformarea numarului zecimal in binar: ");
	scanf("%d", &nr);
	int v[zecimal];

	for(i = 0; i < 8; i++)
	{
		if(zecimal % 2 == 0) 
			v[i] = 0;
		else
			v[i] = 1;
		zecimal/=2;
		if(zecimal == 0) 
			break;
	}

	for(int j = i; j >= 0; j--)
	{
		printf("%d ", v[j]);
	}

	return 0;
}
*/
//_________________________________________________________

//						Inversarea numarului cu vectori  
/*
int main()
{	
	int natural;

	printf("Introdu numarul de elemente: ");
	scanf("%d", &natural);

	int test[natural];
	int i;

	printf("Introdu elementele: \n");
	for(i = 0; i < natural; i++)
	{
		scanf("%d", &test[i]);
	} 

	printf("\n");
	int j;
	for(j = i - 1; j >= 0; j--)
	{
		printf("%d\n", test[j]);
	}

	return 0;
}
*/
//_________________________________________________________

//											Functii 
/*
int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int result = max(3, 7);
	printf("%d", result);
	return 0;
}
*/
//___________________________________________________________

//									Calculator v1.0
/*	
void fun_help(void);
float calculation(float nr1, float nr2, char operation);

int main(void)
{
	float nr1, nr2, result;
	char operation;

	// help
	fun_help();		

	// citire date
	printf("Introduceti primul numar pentru calcul. Tastati aici: ");
	scanf("%f", &nr1);	

	printf("Introduceti al doilea numar pentru calcul. Tastati aici: ");
	scanf("%f", &nr2);

	printf("Ce operatie doriti sa faceti? Tastati aici: %c", operation);
	scanf(" %c", &operation);
	
	// calculare
	result = calculation(nr1, nr2, operation);		
	
	// afisare rezultat
	printf("Rezultatul este: %.2f", result);				

	return 0;
}

void fun_help(void)
{
	printf("Calculator v1.0\r\n");
	printf("Introduceti doua numere si operatorii: + - * /\r\n\r\n");

	return;
}

float calculation(float nr1, float nr2, char operation)
{
	float result = 0;

	switch(operation)
	{
	case '+':
		result = nr1 + nr2;
		break;
	case '-':
		result = nr1 - nr2;
		break;
	case '*':
		result = nr1 * nr2;
		break;
	case '/':
		if(nr2 == 0)
		{
			printf("error");
			exit(-2);
		}
		result = nr1 / nr2;
		break;
	default:
		printf("Acest operator nu exista!\n");
		exit(-1);
	}

	return result;
}
*/
//__________________________________________________________

//								Tablouri bidimensionale
/*
int main(void)
{
	int a[2][2] =
	{
		{10, 5},
		{32, 1}
	};

	printf("a[0][0] = %d\r\n", a[0][0]);
	printf("a[0][1] = %d\r\n", a[0][1]);
	printf("a[1][0] = %d\r\n", a[1][0]);
	printf("a[1][1] = %d\r\n", a[1][1]);

	return 0;
}
*/
//___________________________________________________________

// din <math.h>:
// sqrt() - radical de ordin 2
// cbrt() - radical de ordin 3
// pow() - puterea unui numar
// floot - ia partea intreaga a numarului
// fmod - obtii restul in cazul unei scaderi
// din <ctype.h>:
// toupper - transformare in litere mari
// tolower - transformare in litere mici

//________________________________________________________________

//							Afisarea numerelor introduse				
/*
int main()
{
	int n, r;
	printf("Introdu un numar natural: ");
	scanf("%d", &n);
	do
	{
		r = n % 10;
		printf("%d ", r);
		n /=10;
	}
	while(n != 0);
	return 0;
}
*/
//___________________________________________________________

//		Citirea si afisarea tablourilor bidimensionale
/*
int main(void)
{
	int line_size, col_size;

	printf("Introdu numarul de randuri: ");
	scanf("%d", &line_size);

	printf("Introdu numarul de coloane: ");
	scanf("%d", &col_size);

	int a[line_size][col_size];
	int i, j;

	for(i = 0; i < line_size; i++)
	{
		for (j = 0; j < col_size; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\r\nElementele sunt:\r\n");

	for ( i = 0; i < line_size; ++i)
	{
		for ( j = 0; j < col_size; ++j)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
*/
//__________________________________________________________

//						Suma pe diagonala secundara		
/*
int main(void)
{
	int size = 4;
	int sum;
	int a[4][4] =
	{
		{20, -3, 4, 5},
		{89, 41, 20, 43},
		{34, 25, 40, 85},
		{0, 234, 43, 1}
	};

	sum = 0;

	printf("Numerele de pe diagonala secundara sunt: ");
	for(int i = 3; i >= 0; i--)
	{
		printf("%d ", a[size - 1 - [i][i]);
		sum = sum + a[size - 1 - [i][i];
	}
	printf("\r\nSuma elementelor de pe diagonala secundara este: %d\r\n", sum);

	return 0;
}
*/
//____________________________________________________________

//									Despre string

// %s - afiseaza siruri de caractere
// char variabila[] = "UN SIR DE CARACTERE CARACTERE"
/*
int main(void)
{
	char str[17] = "Beniamin Sferciuc";
	printf("%s\n", str);
	printf("\n");
	for(int i = 0; i < 17; i++)
	{
		printf("%c\n", str[i]);
	}

	return 0;
}
*/
//__________________________________________________________

//				Reamintirea functionarii functiilor
/*
void print_str(char str[])
{
	for(int i = 0; str[i] != 0; i++)
	{
		printf("%c", str[i]);
	}

}

int main(void)
{
	char str[] = {'S', 'a', 'l', 'u', 't', '!', '\0'};
	print_str(str);
	return 0;
}
*/
//_____________________________________________________________

//				Introducerea de la tastatura a caracterelor

// gets - de la getstring in loc de scanf
// gets(argument)
/*
int main(void)
{
	char str[256];
	printf("Introduceti un sir de caractere: ");
	gets(str);
	printf("Ati introdus: %s", str);
	return 0;
}
*/
//__________________________________________________________

//					Siruri, functii, spatii, nr, invers
/*
bool has_spaces(char s[]);
bool has_numbers(char s[]);
void print_reversed(char s[]);
unsigned what_length (char s[]);

int main(void)
{
	char username[256];

	printf("Introduceti aici username-ul: ");
	gets(username);
	printf("Username-ul introdus este: %s", username);
	printf("\n");

	if(has_spaces(username))
	{
		printf("Username-ul contine spatii!\n");
	}

	if(has_numbers(username))
	{
		printf("Username-ul contine numere!\n");
	}

	print_reversed(username);
	unsigned length = what_length(username);

	return 0;
}

// Are spatii?
bool has_spaces(char s[])
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ')
			return true;
	}
	return false;
}

// Are numere?
bool has_numbers(char s[])
{
	unsigned short i;
	for(i = 0; s[i] != 0; i++)
	{
		if(s[i] >= 48 && s[i] <= 57)
			return true;
	}
	return false;
}

// Inverseaza caracterele

void print_reversed(char s[])
{
	int i;
	unsigned length = what_length(s);
	for(i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}

unsigned what_length(char s[])
{
	unsigned i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}
*/
//___________________________________________________________

// 					Despre biblioteca <string.h>
/*
// A. strlen - vine de al string length, adica lungimea sirului
int main(void)
{
	char a[25] = "Beniamin Sferciuc!";
	unsigned short int len;
	len = strlen(a);
	printf("Ati introdus %d de caractere!\n", len);

	return 0;
}
*/

// B. strcmp - vine de la string compare, compara 2 siruri
/*
int main(void)
{
	char a[20] = "abc";
	char b[20] = "abc";
	strcmp(a, b);
	if(strcmp(a, b) == 0)
		printf("Cele doua siruri sunt egale!");
	else
		printf("Cele doua siruri NU sunt egale!");
	return 0;
}
*/

// C. strcpy - vine de la string copy, copiaza sirul din parametrul 2 in parametrul 1
/*
int main(void)
{
	char a[20] = "love";
	char b[20] = "I hate pizza!";
	strcpy(a, b);
	printf("%s\n", a);
	return 0;
}
*/

// D. strchr - vine de la string char, cauta un caracter dintr-un sir
/*
int main(void)
{
	char str1[20] = "Hello, World!";
	char to_find = 'H';
	strchr(str1, to_find);
	if(strchr(str1, to_find) == NULL)
		printf("Caracterul nu a fost gasit!");
	else
		printf("Caracterul se afla in cuvantul: %s", strchr(str1, to_find));
	return 0;

}
*/

// E. strstr - vine de la string string, cauta un cuvant intr-un sir de caractere
/*
int main(void)
{
	char a[256] = "Hello, guys! What are you doing here?";
	char to_find[20] = "guys";

	printf("%s", strstr(a, to_find));

	return 0;
}
*/

// F. strcat - string concatenate - siruri concatenate, adica unirea a doua siruri
/*
int main()
{
	char polite[64] = "Welcome, d-le ";
	char name[20];

	printf("Introduceti numele dvs.: ");
	gets(name);
	printf("\n");
	printf("%s!", strcat(polite, name));

	return 0;
}
*/
//__________________________________________________________

// Despre struct - vine de structura
// struct este ca o cutie mare in care se gasesc alte cutii mici
// de diferite tipuri de date
// typedef
/*
struct Student {
	unsigned varsta;
	char name[30];
};

int main(void)
{
	struct Student s1;

	s1.varsta = 21;
	strcpy(s1.name, "Beniamin");
	printf("%s are %u ani.", s1.name, s1.varsta);
	return 0;
}
*/

/*
typedef struct Book
{
	char titlu[40];
	char autor[40];
	int nr_pages;
} mem;

int main(void)
{
	mem a1;
	mem a2;

	printf("Introdu aici titlul cartii: ");
	gets(a1.titlu);
	printf("Introdu aici autorul cartii: ");
	gets(a1.autor);
	printf("Introdu aici numarul de pagini ale cartii: ");
	scanf("%d", &a1.nr_pages);
	
	printf("\n");
// Nu functioneaza bine
	printf("Introdu aici titlul cartii 2: ");
	gets( a2.titlu);
	printf("Introdu aici autorul cartii 2: ");
	gets(a2.autor);
	printf("Introdu aici numarul de pagini ale cartii 2: ");
	scanf("%d", &a2.nr_pages);

	printf("%s de %s cu %d pagini", a1.titlu, a1.autor, a1.nr_pages);
	printf("%s de %s cu %d pagini", a2.titlu, a2.autor, a2.nr_pages);

	return 0;
}
*/
//_________________________________________________________________

//									Oglindirea unui numar 

// Prin vectori
/*
int main(void)
{
	int oglindire[6];
	int i, j;
	printf("Introdu 6 cifre:\n");

	for(i = 0; i < 6; i++)
	{
		scanf("%d", &oglindire[i]);
	}
	for(j = i - 1; j >= 0; j--)
	{
		printf("%d ", oglindire[j]);
	}

	return 0;
}
*/

// Prin algebra
/*
int main(void)
{
	int nr, oglindire = 0;
	printf("Introdu un numar: ");
	scanf("%d", &nr);

	while(nr)
	{
		oglindire = 10 * oglindire + nr % 10;
		nr /= 10;
	}
	printf("%d\n", oglindire);

	return 0;
}
*/
//__________________________________________________________________

// 				Se micsoreaza cu o unitate fiecare cifra impara
/*
int main(void)
{
	int n, R = 0, p = 1;

	printf("Introdu un numar natural: ");
	scanf("%d", &n);

	while(n) 
    {
        int ultima_cifra = n % 10;
        if(ultima_cifra % 2 == 0)
            R += p * ultima_cifra;
        else
            R += p * (ultima_cifra - 1);
        p *= 10;
        n /= 10;
    }	
  printf("%d", R);
    
  return 0; 
}
*/
//_________________________________________________________________

//			Citirea si afisarea tablourilor bidimensionale(matrici)
/*
#define maxrow 10
#define maxcol 10

int main(void)
{
	int a[maxrow][maxcol];
	int row, col;
	int i, j;

	printf("Mai jos veti introduce numarul de linii si coloane.\n");
	do
	{
		printf("Introdu numarul de randuri: ");
		scanf("%d", &row);
	} while (row < 0 || row > maxrow);

	do
	{
		printf("Introdu numarul de coloane: ");
		scanf("%d", &col);
	} while (col < 0 || col > maxcol);

	printf("Introdu elementele matricei!\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	} 

	printf("Matricea introdusa este:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
//___________________________________________________________

//									Reamintire functii
/*
int fun(int arbitrar);
void printare();

int main(void)
{
	int a = 2;
	printf("Asa functioneaza functiile in C! %d\n", fun(a));
	printare();
	return 0;
}

int fun(int arbitrar)
{
	int test;
	test = arbitrar * 4;
	return test;
}

void printare()
{
	printf("Aceasta este o functie care nu returneaza nicio valoare.\nPentru asta se foloseste (void).");
}
*/

//								Variabile statice?
// Daca declaram o variabila (ex. int i = 0;) intr-o functie,
// de indata ce funtia s-a executat, variabila este stearsa
// din memorie si uita ceea ce a fost salvat in ea,
// asadar folosim o variabila statica (static int i = 0;)

/*
int runner()
{
  static int count = 0;
  count++;
  return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    printf("%d ", runner());
    printf("%d ", runner());
    printf("%d ", runner());
    printf("%d ", runner());

    return 0;
}
*/

// În timp ce variabilele statice au un domeniu de 
//aplicare peste fișierul care le conține, făcându-le 
//accesibile numai în interiorul unui fișier dat, 
//variabilele globale pot fi accesate și în afara fișierului.

/*  
   int sum (int num) 
   {
   	static int total = 0;
   	total += num;
   	return total;
   }

   int main(void) 
   {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
   }
   */
/*
int main(void)
{
	int a[][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%2d ", a[i][j]);
		}
	}

	return 0;
}
*/

// Atentie mai jos!!!

//char name[] = "John Smith";
/* is the same as */
//char name[11] = "John Smith";

//int main()
//{
/* define a local variable a */
//int a = 1;

/* define a pointer variable, and point it to a using the & operator */
//int * pointer_to_a = &a;

//printf("The value a is %d\n", a);
//printf("The value of a is also %d\n", *pointer_to_a);

//return 0;
//}


// 			Cifrele unui numar intr-un vector
/*
int main()
{
	int a; 

	printf("Introdu doua numere de cel putin 3 cifre:\n");
	scanf("%d", &a);

	int arr1[a];
	int k = 0, j = -1;

	while(a)
	{
		arr1[k++] = a % 10;
		a = a/10;
	}

	for (int i = k - 1; i >= 0; i--)
	{	
		j++;
		printf("arr1[%d] = %d\n", j, arr1[i]);
	}
	

	return 0;
}
*/

// 		Construirea unui vector din alt vector
/*
int main()
{
	int number;

	printf("Introdu numarul de elemente din vector: ");
	scanf("%d", &number);

	int arr[number];

	for (int i = 0; i < number; ++i)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	printf("Acum vom transcrie vectorul in alt vector \"arr2\".\n");

	int arr2[number];

	for (int i = 0; i < number; ++i)
	{
		arr2[i] = arr[i];
	}

	for (int i = 0; i < number; ++i)
	{
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}

	return 0;
}
*/
//!!!!!!!!!!!!!!!! printf("%b ");  - anuleaza ultimul caracter

// Ex. Switch
/*
int main(void)
{
	printf("Comenzi de navigare:\nH - Home\nI - Info\nC - Contact\nE - Exit\n");
	char menu;

	do
	{
		printf("Alege optiunea: ");
		scanf("%s", &menu);
		switch(menu)
		{
			case 'I':
				printf("Numele dvs. este: Beniamin Sferciuc\nData nasterii: 10.09.2001\nSexul: M\n");
				break;
			case 'H':
				printf("Comenzi de navigare:  H - Home  I - Info  C - Contact  E - Exit\n");	
				break;
			case 'C':
				printf("Sunati la 0800 800 880 pentru ajutor.\n");
				break;
			case 'E':
				exit(0);
				break;
			default:
				printf("Comanda incorecta. Introduceti o alta comanda!\n");
				break;
		}
	}
	while(menu != 'E');

	return 0;
}
*/


// getchar(void) & putchar(var)
/*
int main(void)
{
	int c;

	printf("Enter a number: ");
	printf("\n");
	getch(); 
	c = getchar();
	putchar(c);
	getch(); // Asteapta un caracter
	return 0;
}
*/


// Copierea elem unei vector in altul
/*
int main()
{
    float arr1[5] = {1.5, 2.1, 3.7, 4.2, 5.5}, arr2[5];
    for(int i = 0; i < 5; i++)
        arr2[i] = arr1[i];

    for(int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    return 0;
}
*/

// Working with functions
/*
void has_print();
int make_calculation(int i, int j, int z);
int make_everything(int i, int j, int z);

int main(void)
{
	int a, b, c, result;

	has_print();
	scanf("%d%d%d", &a, &b, &c);

	result = make_calculation(a, b, c);
	printf("The result is: %d\n", result);

	make_everything(a, b, c);

	return 0;
}

void has_print()
{
	printf("Introdu 3 numere de la tastatura: ");
}

int make_calculation(int i, int j, int z)
{
	return i * j * z;
}

int make_everything(int i, int j, int z)
{
	int result;

	result = i * j * z;
	printf("Rezultatul din functie auto-returnat este: %d\n", result);

	return result;
}
*/


// Functii cu vectori
/*
void find_average(int arr[]);

int main(void)
{
	int arr[] = {41,0,2,19,5};
	find_average(arr);

	return 0;
}

void find_average(int f[])
{
	float sum = 0;
	float avr;

	for (int i = 0; i < 5; ++i)
	{
		sum += f[i];
	}

	avr = sum/5;
	printf("Media aritmetica a vectorului este: %.1f\n", avr);
}
*/

// Functii cu matrice
/*
void display_mat(int mat[3][3]);

int main(void)
{
	int mat[3][3];

	printf("Please enter 9 number: \n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	// Afisam elementele matricei cu ajutorul functiilor
	display_mat(mat);

	return 0;
}

void display_mat(int mat[3][3])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%2d", mat[i][j]);
		}
		printf("\n");
	}
}
*/

/*
void main( )
{
  int a, b, c, choice;
  while(choice != 3)
  {
    // Printing the available options 
    printf("\n 1. Press 1 for addition");
    printf("\n 2. Press 2 for subtraction");
    printf("\n    Enter your choice: ");
    // Taking users input 
    scanf("%d", &choice);
    
    switch(choice)
    {
      case 1:
        printf("Enter 2 numbers");
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("%d", c);
        break;
      case 2:
        printf("Enter 2 numbers");
        scanf("%d%d", &a, &b);
        c = a - b;
        printf("%d", c);
        break;
      default:
        printf("you have passed a wrong key");
        printf("\n press any key to continue");
    }
  } 
} 
*/

/*
int main(void)
{	
	char name[100];

	printf("Introdu numele tau: ");
	gets(name);

	int n;

	printf("Introdu de cate ori vrei sa iti afisez numele: ");
	scanf("%d", &n);

	while(n) // implicit se opreste cand n == 0
	{
		puts(name);
		n--;
	}

	return 0;
}
*/

/*
int a = 30;  // global variable

int main(void)
{
	a = 20;
	printf("%d\n", a);

	return 0;
}
*/

// Functie fara argumente si fara valoare returnata
/*
void greatNum();       // function declaration

int main()
{
  greatNum();        // function call
  return 0;
}

void greatNum()        // function definition
{
  int i, j;
  printf("Enter 2 numbers that you want to compare...");
  scanf("%d%d", &i, &j);
  if(i > j) {
      printf("The greater number is: %d", i);
  }
  else {
      printf("The greater number is: %d", j);
  }
}
*/

/*
// Functie fara argumente si cu o valoare returnata

int greatNum();       // function declaration

int main()
{
  int result;
  result = greatNum();        // function call
  printf("The greater number is: %d", result);
  return 0;
}

int greatNum()        // function definition
{
  int i, j, greaterNum;
  printf("Enter 2 numbers that you want to compare...");
  scanf("%d%d", &i, &j);
  if(i > j) {
      greaterNum = i;
  }
  else {
      greaterNum = j;
  }
  // returning the result
  return greaterNum;
}
*/

/*
// Functie cu argumente si fara return

void greatNum(int a, int b);       // function declaration

int main()
{
  int i, j;
  printf("Enter 2 numbers that you want to compare...");
  scanf("%d%d", &i, &j);
  greatNum(i, j);        // function call
  return 0;
}

void greatNum(int x, int y)        // function definition
{
  if(x > y) {
      printf("The greater number is: %d", x);
  }
  else {
      printf("The greater number is: %d", y);
  }
}
*/

/*
// Funcție cu argumente și o valoare returnată

int greatNum(int a, int b);       // function declaration

int main()
{
  int i, j, result;
  printf("Enter 2 numbers that you want to compare...");
  scanf("%d%d", &i, &j);
  result = greatNum(i, j); // function call
  printf("The greater number is: %d", result);
  return 0;
}

int greatNum(int x, int y)        // function definition
{
  if(x > y) {
    return x;
  }
  else {
    return y;
  }
}
*/

// Recursiune - mod special de imbricare a functiilor
/*
int factorial(int x);       //declaring the function

void main()
{
  int a, b;
  
  printf("Enter a number...");
  scanf("%d", &a);
  b = factorial(a);       //calling the function named factorial
  printf("%d", b);
}

int factorial(int x) //defining the function
{
  int r = 1;
  if(x == 1) 
    return 1;
  else 
    r = x*factorial(x-1);       //recursion, since the function calls itself
  
  return r;
}
*/


//	Structuri
/*
struct student
{
	char name[25];
	int age;
	char gender;
};

int main(void)
{
	struct student s1 = {"Beniamin Sferciuc", 21, 'M'};
	
	struct student s2;
	gets(s2.name);

	printf("Numele studentului 1 este: %s\n", s1.name);
	printf("Varsta studentului 1 este: %d\n", s1.age);
	printf("Sexul studentului 1 este: %c\n", s1.gender);
	printf("Numele studentului 2 este: %s\n", s2.name);

	return 0;
}
*/

//	Matrice de structuri
/*
struct Employee
{
  char ename[10];
  int sal;
};

struct Employee emp[5];
int i, j;

void ask()
{
  for(i = 0; i < 3; i++)
  {
    printf("\nEnter %dst Employee record:\n", i+1);
    printf("\nEmployee name:\t");
    fflush(stdin);
    gets(emp[i].ename);
    printf("\nEnter Salary:\t");
    scanf("%d", &emp[i].sal);
  }
  printf("\nDisplaying Employee record:\n");
  for(i = 0; i < 3; i++)
  {
    printf("\nEmployee name is %s", emp[i].ename);
    printf("\nSlary is %d", emp[i].sal);
  }
}

void main()
{
  ask();
}
*/

//___________________________________________________

// About union 
/*
union item
{
	int a;
	float b;
	char ch;
};

int main()
{
	union item it;
	it.a = 12;
	it.b = 20.2;
	it.ch = 'z';

	printf("%d\n", it.a);
	printf("%f\n", it.b);
	printf("%c\n", it.ch);

	return 0;
}
*/
/*
typedef struct item 
{
	int a;
	float b;
	char c;
} j;

int main(void)
{
	j ghe[10];
	int n;
	printf("Enter number you want to records: ");
	scanf("%d", &n);
	printf("\n");

	for (int i = 0; i < n; ++i)
	{
		fflush(stdin);
		printf("Introdu un numar intreg: \n");
		printf("%d) ", i + 1);
		scanf("%d", &ghe[i].a);
		printf("Introdu un numar zecimal: \n");
		printf("%d) ", i + 1);
		scanf("%f", &ghe[i].b);
		printf("Introdu un caracter: \n");
		printf("%d) ", i + 1);
		scanf(" %c", &ghe[i].c);
	}

	for (int i = 0; i < n; ++i)
	{
		printf("\nAti introdus:\n%d) %d %f %c", i + 1, ghe[i].a, ghe[i].b, ghe[i].c);
	}

	return 0;
}
*/

// conversie
/*int main(void)
{
    double a = 1000.10;
    double b;
    // declare a pointer
    int *p1;
    // assign value to pointer with casting
    p1 = (int *)&a;

    // value of 'b' should be same as 'a', but it won't be
    b = *p1;

    printf("Value of a is: %.1f \n", b);

    return 0;
}
*/
/*
int main(void)
{
	int first_pointer = 56;
	int *pointer;

	pointer = &first_pointer;

	printf("%d\n", first_pointer);		// 56
	printf("%d\n", &first_pointer);		// 6422300
	printf("%d\n", *&first_pointer);	// 56
	printf("%d\n", pointer);					// 6422300
	printf("%d\n", &pointer);					// 6422296
	printf("%d\n", *pointer);					// 56
	printf("%d\n", *&pointer);				// 6422300

	return 0;
}
*/
/*
int main() {

    int  a = 10;
    int  *p1;       //this can store the address of variable a
    int  **p2; 
    
     // this can store the address of pointer variable p1 only. 
     // It cannot store the address of variable 'a' 
    

    p1 = &a;
    p2 = &p1;

    printf("Address of a = %u\n", &a);
    printf("Address of p1 = %u\n", &p1);
    printf("Address of p2 = %u\n\n", &p2);

    // below print statement will give the address of 'a'
    printf("Value at the address stored by p2 = %u\n", *p2);
    
    printf("Value at the address stored by p1 = %d\n\n", *p1);

    printf("Value of **p2 = %d\n", **p2); //read this *(*p2)

    
    	//	This is not allowed, it will give a compile time error-
      //  p2 = &a;
      //  printf("%u", p2);
    
    return 0;
}
*/

// Stucturi de pointeri
/*
struct status {
	char name[20];
	int age;
	char sex;
};

int main(void)
{
	struct status s1 = {"Beniamin", 21, 'M'};

	struct status *ptr;
	ptr = &s1;

	printf("%s\n", ptr -> name);
	printf("%d\n", ptr -> age);
	printf("%c\n", ptr -> sex);	

	return 0;
}
*/

// Functii si pointeri
/*
void swap(int *a, int *b);

int main(void)
{
	int m = 10, n = 20;
	printf("m  = %d\n", m);
	printf("n = %d\n\n", n);

	swap(&m, &n);
	printf("After:\n");
	printf("m = %d\n", m);
	printf("n = %d\n", n);

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
*/

/*
int *larger(int *x, int *y);

int main(void)
{
	int a = 15;
	int b = 92;
	int *p;
	p = larger(&a, &b);
	printf("%d is larger", *p);

	return 0;
}

int *larger(int *x, int *y)
{
	if(*x > *y)
		return x;
	else
		return y;
}
*/
/*
int sum (int x, int y)
{
	return x + y;
}

int main()
{	
	int (*function_pointer)(int, int);
	function_pointer = sum;
	int s = function_pointer(10, 15);
	printf("Sum is %d\n", s);

	return 0;
}
*/
/*
int main(void)
{
	int intarray[5] = {10, 20, 30, 40, 50};

	for (int i = 0; i < 5; ++i)
	{
		printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	}

	int *intpointer = &intarray[3]; //40
	printf("address: %x - has value %d\n", intpointer, *intpointer);

	intpointer++; //creste adresa din memorie
	printf("address: %x - has value %d\n", intpointer, *intpointer);
 	
	// intpointer++ functioneaza ca un vector 


	return 0;
}
*/


// Scrierea unei matrice in alta matrice
/*
int main(void)
{
	int line = 3, col = 3;
	int mat[line][col];

	// Citire
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");

	// Afisare
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// Anulare prima linie

	int mat1[line][col];

	for (int i = 1; i < line; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			mat1[i - 1][j] = mat[i][j];
		}
	}

	// Afisare matrice resultata

	for (int i = 0; i < line - 1; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/


//Afiseaza cuvintele dintr-un sir prin separator
/*
int main(void)
{
	char s[] = "This is the way.";
	char d[] = " ";

	char *portion = strtok(s, d);

	// printf("%s\n", portion1);

	// char *portion2 = strtok(NULL, d);
	// printf("%s\n", portion2);

	// char *portion3 = strtok(NULL, d);
	// printf("%s\n", portion3);

	// char *portion4 = strtok(NULL, d);
	// printf("%s\n", portion4);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, d);
	}

	return 0;
}*/

/*int main(void)
{
	char s[] = "ASDFWRQ6428031579";
	char f[] = "0123456789";

	int a = strcspn(s, f);
	
	if (a > 0)
	{
		printf("Au fost gasite alte %d caractere nepermise in sir.\n", a);
	}
	else
		printf("Perfect!\n");

	char *numcode = s + a;

	printf("%s\n", numcode);

}
*/
/*
int main(void)
{
	FILE *first_file;

	first_file = fopen("readme.txt", "r");

	char buffer[256];
	fgets(buffer, 256, first_file);
	printf("Buffer: %s\n", buffer);
	fclose(first_file);

	char d[] = " ";

	char *storage = strtok(buffer, d);

	while (true)
	{
		if (storage != NULL)
		{
			printf("%s\n", storage);
			storage = strtok(NULL, d);
		}
	}

	return 0;
}*/

// genereaza numere aleatorii
/*
int* generate_random_arr(int n)
{
	int *arr = (int*)malloc(n * sizeof(int));

	srand(time(NULL));

	for (int i = 0; i < n; ++i)
	{
		*(arr + i) = rand();
	}
	return arr;
}

void print_array(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(arr + i));
	}
}

int main(void)
{
	int n;
	int *arr;

	printf("Introduceti n: ");
	scanf("%d", &n);

	arr = generate_random_arr(n);
	print_array(arr, n);

	free(arr);

	return 0;
}*/

/*
float* get_high_grades(float* grades, int n, int *high_grades_count)
{
	int counter = 0, k;

	for (int i = 0; i < n; ++i)
	{
		if (*(grades + i) > 9)
		{
			counter++;
		}
	}

	*high_grades_count = counter;

	float *high_grades = malloc(counter * sizeof(float));

	for (int i = 0, k = 0; i < n; ++i)
	{
		if (grades[i] > 9)
		{
			high_grades[k] = grades[i];  
			k++;	
		}
	}

	return high_grades; 
}

float* enter_greades(int n)
{
	float *grades = (float*)malloc(n * sizeof(float));
	for (int i = 0; i < n; ++i)
	{
		printf("%d = ", i + 1);
		scanf("%f", (grades + i));
	}
	return grades;
}

void print_array(float *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%.2f ", *(arr + i)); // *(arr + i) == arr[i]
	}
}

int main(void)
{
	int n, high_grades_count, high_grades;
	float *grades;

	printf("Introduceti numarul de elevi: ");
	scanf("%d", &n);

	if (n > 30)	
	{
		printf("Numarul de elevi este prea mare.\n");
		return 1;
	}

	grades = enter_greades(n);
	print_array(grades, n);

	high_grades = get_high_grades(grades, n, &high_grades_count);
	free(grades);
	
	print_array(high_grades, high_grades_count);
	free(high_grades);

}*/

/* Linear Search Using C */

// Binary Search Using C

// Quicksort Using C Program

#include <stdio.h>

// Swap Function
void swap(int *n1, int *n2) {
  int m = *n1;
  *n1 = *n2;
  *n2 = m;
}

int partition(int arr[], int x, int y) {
  
  int pivot = arr[y];
  
  int i = (x - 1);

  for (int j = x; j < y; j++) {
    if (arr[j] <= pivot) {
        
      i++;
      
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[y]);
  
  return (i + 1);
}

void quickSort(int arr[], int x, int y) {
  if (x < y) {
    
    int pi = partition(arr, x, y);
    
    quickSort(arr, x, pi - 1);
    
    quickSort(arr, pi + 1, y);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int main() {
  int values[] = {99, 88, 64, 25, 40, 20, 42};
  
  int n = sizeof(values) / sizeof(values[0]);
  
  printf("Given Unsorted Array Values \n");
  printArray(values, n);
  
  quickSort(values, 0, n - 1);
  
  printf("Sorting Given Array In The Ascending Order: \n");
  printArray(values, n);
}