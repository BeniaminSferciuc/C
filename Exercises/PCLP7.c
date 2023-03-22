#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


// Laboratorul 9 - Siruri si Meniu

// (1.) Siruri de caractere
// Ex. 1) 
/*
int main(void)
{
	char str[100];

	printf("Introdu un sir de caractere: ");
	// Citire
	gets(str);
	// A. Afisare cu virgula dupa fiecare caracter
	for (int i = 0; str[i] != '\0'; ++i)
	{
		printf("%c, ", str[i]);
	}
	printf("\b\b \n");
	// B. Afisare inversat
	printf("Sirul inversat este: %s\n", strrev(str));

	return 0;
}
*/

// Ex. 2) Afiseaza nr. de spatii din acest sir
/*
int main(void)
{
	char str[50];

	printf("Introdu un sir de caractere: ");
	scanf("%[^\n]", &str);

	short int a = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if(str[i] == ' ')
			a++;
	}
	printf("%d\n", a);

	return 0;
}
*/


// (2.) Aplicatii de tip meniu
// Ex. 1)
/*
void display(char str[]);

int main(void)
{
	char str[30];

	printf("\nComenzi de navigare:\n1\tCitire\n2\tAfisare\n3\tAfisare cifre\n4\tNumarul de litere\n5\tSuma cifrelor\n6\tEste palindrom?\n7\tExit\n");
	int menu;

	do
	{
		fflush(stdin);
		printf("\nAlege optiunea: ");
		scanf("%d", &menu);

		int a = 0, sum = 0, palindrom = 0;
		char str1[30]; 
		int lun = 0;

		switch(menu)
		{
			case 1: 
				fflush(stdin);
				printf("Introduceti un sir de maximum 30 caractere: ");
				gets(str);
				break;
			case 2:
				printf("Sirul introdus este:\n %s\n", str);
				break;
			case 3:
				for (int i = 0; i < strlen(str); ++i)
					if (str[i] > 47 && str[i] < 58)
						a++;

				printf("Ati introdus %d cifre.\n", a);

				if (a == 1)
					printf("Cifra introdusa este: ");
				else if (a > 1)
					printf("Cifrele introduse sunt: ");
				else
					printf("Nu ati introdus nicio cifra!\n");

				for (int i = 0; i < strlen(str); ++i)
					if (str[i] > 47 && str[i] < 58)
						printf("%c ", str[i]);
				break;
			case 4:
				for (int i = 0; i < strlen(str); ++i)
				{
					if(isalpha(str[i]))
						a++;
				}
				printf("Ati introdus %d litere.\n", a);
				break;
			case 5:
				for (int i = 0; i < strlen(str); ++i)
				{
					if (str[i] > 47 && str[i] < 58)
					{
						sum = sum + str[i] - 48;
					}
				}
				printf("Suma cifrelor este: %d\n", sum);
				break;
			case 6:
				for (int j = strlen(str) - 1; j >= 0; j--)
				{
					str1[a] = str[j];
					a++;
				}

				for (int i = 0; i < strlen(str); ++i)
				{
					printf("%c", str1[i]);
				}
				printf("\n");

				for (int i = 0; i < strlen(str) - 1; ++i)
				{
					if(str[i] == str1[i])
						palindrom = 1;
				}
				
				if (palindrom == 0)
					printf("Nu este palindrom.\n");
				else 
					printf("Este palindrom.\n");
				break;			
			case 7:
				exit(0);
				break;
			default:
				printf("Comanda incorecta. Introduceti o alta comanda!\n");
				break;
		}
	}
	while (menu != 7);

	return 0;
}	
*/

// Ex. 2)
/*
int main(void)
{
	char s[30];
	char str[30];
	char menu;

	printf("Panou de navigare:\nC\tCitire\nA\tAfisare\nN\tNumar de vocale si consoane\nE\tEliminare vocale din sir\nM\tTransformare litere mici in mari\nV\tCaractere numerice\nD\tConcatenare cu alt sir\nI\tIesire\n");

	do
	{
		int nr_v = 0, nr_c = 0, nr_cs = 0, p = 0;
		printf("\nAlege optiunea: ");
		scanf(" %c", &menu);

		switch(menu)
		{
			case 'C':
				fflush(stdin);
				printf("Introdu un sir de caractere: ");
				gets(s);
				break;
			case 'A': 
				printf("%s\n", s);
				break;
			case 'N':
				for (int i = 0; i < strlen(s); ++i)
				{
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
						nr_v++;
					else
						nr_c++;
					if(s[i] >= 32 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 127)
						nr_cs++;
				}
				printf("Numarul de vocale din sir este: %d\n", nr_v);
				printf("Numarul de consoane din sir este: %d\n", nr_c - nr_cs);
				break;
			case 'E':
				printf("Sirul fara vocale este: ");
				for (int i = 0; i < strlen(s); ++i)
				{
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
						nr_c++;
					else
						printf("%c", s[i]);		
				}	
				break;
			case 'M':
				for (int i = 0; i < strlen(s); ++i)
				{
					printf("%c", toupper(s[i]));
				}
				break;
			case 'V':
				for (int i = 0; i < strlen(s); ++i)
				{
					if(s[i] >= 48 && s[i] <= 57)
						p++;
				}
				if(p == 0)	
					printf("Sirul este alcatuit exclusiv din caractere nenumerice.\n");
				else
					printf("Sirul NU este alcatuit exclusiv din caractere nenumerice.\n");
				break;
			case 'D':
				fflush(stdin);
				printf("Introdu un nou sir de caractere: ");
				gets(str);
				printf("%s", strcat(s, str));
				break;	
			case 'I':
				exit(0);
				break;	
			default:
				printf("Ati introdus o comanda gresita.\n");
				break;						
		}
	}
	while(menu != 'I');

	return 0;
}
*/

// (3.) Probleme suplimentare

// Ex. 1)
/*
int main(void)
{
	char s[100];

	printf("Introduceti un sir de caractere: ");
	gets(s);
	
	int a = strlen(s);


	for (int i = 0; i < a; ++i)
	{
		if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
		{
			s[i] = 8;
		}
		else 
			continue;
		puts(s);
	}
	
	return 0;
}
*/

// Ex. 2)
/*
int main(void)
{
	char str[100];
	char word_find[10];

	printf("Introduceti o propozitie: ");
	scanf("%[^\n]", &str);

	printf("Acum introduceti un singur cuvant: ");
	scanf("%s", &word_find);

	if(strstr(str, word_find))
		printf("Cuvantul a fost gasit: %s", strstr(str, word_find));
	else
		printf("Cuvantul nu a fost gasit in sirul dat.\n");

	return 0;
}
*/

//  Ex. 3)
/*
int main(void)
{
	char str[100];
	int a = 0;
	printf("Introduce o propozitie afirmativa sau negativa: ");
	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if(str[i] == 110)
			a++;
	}

	if (strstr(str, " nu ") || a % 2 != 0)
	{
		printf("Propozitia este negativa!\n");
	}
	else 
	{
		printf("Propozitia este afirmativa!\n");
	}
		
	return 0;
}
*/

// Ex. 4)
/*
int main(void)
{
	char s[100];
	int sum = 0, n;
	printf("Introdu un nr de siruri: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		fflush(stdin);
		printf("Introdu un sir de caractere: ");
		gets(s);
		sum = sum + strlen(s);
	}

	printf("Ati introdus %d caractere.\n", sum);

	return 0;
}
*/

  
