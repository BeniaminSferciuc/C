#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <dirent.h>

/*
int main()
{
	FILE *file = NULL;
	// r - read
	//fopen(nume fisier, mod de deschidere) - deschide un fisier
	file = fopen("fisiere.txt", "w"); 
	int nr;
	char s[50];

	if(file == NULL)
	{
		printf("Eroare la deschiderea fisierului!");
		return(-1);
	}

	// Citire date dintr-un fisier
	//! fscanf(de unde citim, formatul, unde salvam) - citeste dintr-un fisier
	// fscanf(file, "%d", &nr);
	// printf("In fisier se afla: %d\n", nr);

	// fscanf nu citeste decat primul cuvant, pana intalneste un spatiu, in cazul sirurilor
	// fscanf(file, "%s", s);
	// printf("Rezultat: %s", s);

	// fgets(unde stocam, nr maxim de caractere citire, de unde citim) - functioneaza ca si gets(), dar pentru fisiere
	// fgets(s, 50, file);
	// printf("R: %s\n", s);

	// w - write (rescrie in fisier, adica sterge tot ce exista deja)
	// w - si creeaza fisiere daca nu exista
	char *re = "My son is born!";

	//fprintf(unde stocam, formatul, de unde scriem) - scrie date intr-un fisier 
	fprintf(file, "%s", re);

	// a - append
	// scrie la sfarsitul fisierului si daca nu exista unul, il creaza

	

	fclose(file); // inchide un fisier

	file = fopen("fisiere.txt", "a");
	fprintf(file, "%s", "\nSe va scrie langa?");

	fclose(file);

	// r+ - citire si scriere (scrie peste)

	file = fopen("fisiere.txt", "a+");
	fprintf(file, "%s", "\nthis is a try r+");

	// a+ - append si citire (scrie la sfarsit)
	// w+ - inscriere si citire (sterge tot si scrie)

	return 0;
}
*/
/*
int main()
{
	FILE *file = NULL;
	file = fopen("text.txt", "w+");
	char word[50];

	if (file == NULL)
	{
		printf("Eroare la deschiderea fisierului");
		return (-1);
	}
	
	//fflush - permite sa inscrie in fluxul de date toate datele chiar in momentul respectiv

	fprintf(file, "Hello");
	fflush(file); // forteaza scrierea imediat in fisier
	fseek(file, 0, SEEK_SET ); //SEEK_SET - este o constanta care inseamna startul fisierului
	// SEEK_END - sfarsitul unui fisier
	// SEEK_CUR - pozitia curenta in fisier
	fscanf(file, "%s", word);
	printf("%s", word);
	fclose(file);

	return 0;
}
*/
// Citirea unui vector unidimensional dintr-un fisier
// int main(void)
// {
// 	FILE *file;
// 	int numbers[50];
// 	int n; // marimea tabloului

// 	file = fopen("array.txt", "r");

// 	if (file == NULL)
// 	{
// 		printf("Eroare la deschiderea fisierului!");
// 		return(-1);
// 	}

// 	fscanf(file, "%d", &n);
// 	for (int i = 0; i < n; i++)
// 	{
// 		fscanf(file, "%d", &numbers[i]);
// 	}
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", numbers[i]);
// 	}
// 	fclose(file);

// 	return 0;
// }

// Exercitiu: scrie in fisier si preia din fisier
// int main(void)
// {
// 	FILE *fisier_1;
// 	int n = 0;
	
// 	printf("Introduceti dimensiunea vectorului: ");
// 	scanf("%d", &n);

// 	int arr[n];

// 	fisier_1 = fopen("test.txt", "w");

// 	if (fisier_1 == NULL)
// 	{
// 		printf("Eroare la deschiderea fisierului!");
// 		return(-1);
// 	}
	
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("arr[%d] = ", i);
// 		scanf("%d", &arr[i]);
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		fprintf(fisier_1, "%d ", arr[i] + 1);
// 	}

// 	fclose(fisier_1);

// 	printf("Elementele vectorului introduse: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d, ", *(arr + i));
// 	}
// 	printf("\b\b.");

// 	fisier_1 = fopen("test.txt", "r");

// 	if (fisier_1 == NULL)
// 	{
// 		printf("Eroare la deschiderea fisierului!");
// 		return(-1);
// 	}
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		fscanf(fisier_1, "%d", &arr[i]);
// 	}

// 	printf("\nVectorul din fisier este: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d, ", arr[i]);
// 	}
// 	printf("\b\b.");
// 	fclose(fisier_1);

// 	return 0;
// }

// Exercitiu similar cu cel de sus, dar cu mai putine linii de cod
// int main(void)
// {
// 	FILE *fisier_1;
// 	int n = 0;
	
// 	printf("Introduceti dimensiunea vectorului: ");
// 	scanf("%d", &n);

// 	int arr[n];

// 	fisier_1 = fopen("test.txt", "w+");

// 	if (fisier_1 == NULL)
// 	{
// 		printf("Eroare la deschiderea fisierului!");
// 		return(-1);
// 	}
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("arr[%d] = ", i);
// 		scanf("%d", &arr[i]);
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		fprintf(fisier_1, "%d ", arr[i] + 1);
// 	}
// 	fflush(fisier_1);
// 	fseek(fisier_1, 0, SEEK_SET);

// 	printf("Elementele vectorului introduse: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d, ", *(arr + i));
// 	}
// 	printf("\b\b.");
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		fscanf(fisier_1, "%d", &arr[i]);
// 	}

// 	printf("\nVectorul din fisier este: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d, ", arr[i]);
// 	}
// 	printf("\b\b.");

// 	return 0;
// }

// Constanta EOF == -1 (END OF FILE)
/*
int main()
{
	FILE *file = NULL;
	char number[50];
	int i = 0;

	file = fopen("test.txt", "r");
	
	while(fscanf(file, "%d", &number[i]) != EOF)
		i++;
	printf("%d\n", i);
	for (int j = 0; j < i; j++)
		printf("%d, ", number[j]);

	printf("\b\b.");	
		
	int result = fscanf(file, "%d", &number);
	if (result == EOF) // sau fscanf(file, "%d", &number) direct in if
		printf("\nAi ajuns la sfarsitul fisierului");

	return 0;
}
*/
//Preia toate cuvintele dintr-un fisier
// int main(void)
// {
// 	FILE *f = NULL;
// 	char word[30][50];
// 	int n = 0;

// 	f = fopen("test.txt", "r");

// 	if(f == NULL)
// 	{
// 		printf("Eroare la deschiderea fisierului!");
// 		return(-1);
// 	}

// 	while(fscanf(f, "%s", &word[n]) != EOF) //fscanf(f, "%s", &word[n]) != EOF
// 		n++;

// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%s\n", word[i]);
// 	}
	
// 	return 0;
// }

//perror("Inceputul mesajului");
// int main(void)
// {
// 	FILE *f;
// 	f = fopen("unexist.txt", "rb");

// 	if(f == NULL)
// 	{
// 		perror("");
// 	}
// 	else
// 		fclose(f);

// 	return 0;
// }

//macrocomenzi (de eroare):
//EXIT_SUCCESS este 0
//EXIT_FAILURE este -1

// int main()
// {
// 	int dividend = 20;
// 	int divisor = 0;
// 	int quotient;

// 	if (divisor == 0)
// 	{
// 		fprintf(stderr, "Division by zero! It's imposible!");
// 		exit(EXIT_FAILURE);
// 	}

// 	quotient = dividend / divisor;
// 	fprintf(stderr, "Value of quotient: %d\n", quotient);
	


// 	return 0;
// }

// matrice 
// int main (void)
// {
// 	FILE *f = NULL;
// 	int n, m;
// 	int numbers[20][20];

// 	f = fopen("test.txt", "r");

// 	if (f == NULL)
// 	{
// 		perror("");
// 		exit(EXIT_FAILURE);
// 	}

// 	fscanf(f, "%d %d", &n, &m);
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j < m; j++)
// 		{
// 			fscanf(f, "%d", &numbers[i][j]);
// 		}
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j < m; j++)
// 		{
// 			printf("%d ", numbers[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	fclose(f);

// 	return 0;
// }

//memorie dinamica
// int main()
// {
// 	FILE *file = NULL;
// 	int n;
// 	int *number;

// 	file = fopen("test.txt", "r");

// 	if (file == NULL)
// 	{
// 		perror("");
// 	}

// 	fscanf(file, "%d", &n);
// 	number = (int*)malloc(n * sizeof(int));

// 	for (int i = 0; i < n; i++)
// 	{
// 		fscanf(file, "%d", number + i);
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", *(number + i));
// 	}
	
// 	free(number);
// 	fclose(file);

// 	return 0;
// }

//Cum sa stergi un fisier si cum sa redenumesti un fisier
// functia remove("nume fisier") - sterge un fisier
// functia rename("nume fisier existent", "nume nou");
// cu rename() poti muta fisierele 
// int main()
// {
// 	FILE *file = NULL;
// 	file = fopen("test.txt", "r");

// 	if (file == NULL)
// 		perror("");

// 	fclose(file);

// 	int ren = rename("this.txt", "file//code.txt");
// 	int rem = remove("file//code.txt");
	
// 	if (rem == 0)
// 		printf("Success!");
// 	else
// 		printf("Erorr!");

// 	return 0;
// }
//Citire cuvinte si caractere dintr-un fisier
// int main(void)
// {
//     char filename[30];
//     printf("File name: ");
//     scanf("%s", filename);

//     FILE *file = fopen(filename, "r");
//     if (file == NULL)
//     {
//         perror("");
//         return 1;
//     }

//     int c; // stocheaza fiecare caracter din fisier pe rand
//     int characters = 0; // store nr de caractere
//     int words = 0; // store nr de cuvinte
//     bool whitespace = true;

//     while(true)
//     {
//         c = fgetc(file); // va citi cate un caracter pe rand
//         if(feof(file)) break;
//         else if(ferror(file))
//         {
//             printf("Error reading file./n");
//             return 1;
//         }

//         characters++; // citeste fiecare caracter

//         if (whitespace && !isspace(c))
//         {
//             words++;
//             whitespace = false;
//         }
//         else if(!whitespace && isspace(c))
//         {
//             whitespace = true;
//         }
//     }

//     printf("Numarul de caractere: %d\n", characters);
//     printf("Numarul de cuvinte: %d", words);

//     return 0;
// }

// about feof()

// int main(void)
// {
// 	FILE *file = NULL;
// 	file = fopen("fisier.txt", "r");

// 	if (file == NULL)
// 	{
// 		perror("");
// 		return 1;
// 	}

// 	char ch;
// 	int counter = 0;
	
// 	while(!feof(file)) // echivalent cu if(ch == EOF) break;
// 	{
// 		ch = fgetc(file);
// 		printf("%c", ch);
// 		counter++;
// 	}
// 	printf("\n%d\n", counter);
// 	getch();

// 	return 0;
// }

char filename[50];

void create_file()
{
	printf("Introduceti numele fisierului: ");
	scanf("%s", filename);

	FILE *file = fopen(filename, "w");

	if (file == NULL)
	{
		perror("");
		exit(EXIT_FAILURE);
	}

	fclose(file);
}

void write_in_file()
{
	char text[1000];
	printf("Introduceti numele fisierului: ");
	scanf("%s", filename);

	FILE *file = fopen(filename, "r+");

	if (file == NULL)
	{
		perror("");
		goto index;
	}

	printf("\nCe doriti sa introduceti:\n");
	fflush(stdin);
	fgets(text, 1000, stdin);
	fprintf(file, "%s", text);

	index:
	fclose(file);
}

void print_from_file()
{
	char store[1000];
	printf("Introduceti numele fisierului: ");
	scanf("%s", filename);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		perror("");
		exit(EXIT_FAILURE);
	}

	fgets(store, 1000, file);
	printf("%s", store);
	fclose(file);
}

void remove_file()
{
	printf("Introduceti numele fisierului pe care doriti sa-l stergeti: ");
	scanf("%s", filename);

	remove(filename);
}

void dir()
{
	DIR *d;
	struct dirent *dir;
	d = opendir(".");
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			printf("%s\n", dir->d_name);
		}
		closedir(d);
	}
}

int main(void)
{
	int menu;
	printf("\n1\tCreati un fisier\n2\tScrieti intr-un fisier\n3\tDescoperiti continutul unui fisier\n4\tStergeti un fisier\n5\tExit\n");
	do
	{
		printf("\nIntroduceti o optiune: ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			create_file();
			break;
		case 2:
			write_in_file();
			break;
		case 3:
			print_from_file();
			break;
		case 4:
			remove_file();
			break;
		case 5:
			exit(-1);
			break;
		case 6:
			dir();
			break;
		default:
			printf("Ati introdus o optiune gresita!");
			break;
		}
	} while (1);
	

	return 0;
}
