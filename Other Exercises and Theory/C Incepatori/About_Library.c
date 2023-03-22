#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <time.h>

// About <conio.h> - conio.h = console input output .header

// 1. clrscr() - Curata ecranul 
// 2. getch() - Used to input one character without echo 
// 3. getche() - Used to input one character with echo
// 4. putch() - Afiseaza un caracter pe ecran
// 5. sgets() - Citeste un sir de caractere
// 6. cputs() - Afiseaza un sir de caractere pe ecran
// 7. cscanf() & cprintf() - work like printf si scanf
// 8. kbhit() - ne spune daca user a apasat vreo tasta sau nu
// 9. textcolor() - schimba culoarea textului
// 10. background() - schimba fundalul textului
// 11. delline() - sterge linii simple sau multiple
// 12. gotoxy() - preia doi parametrii si duce cursorul pe o anumita coord.
// 13. wherex() & wherey() - pozitia cursorului

/*
// 1. Nu functioneaza 
/*
int main()
{
    printf("Welcome to studytonight.");
    printf("\nThese two sentences will be cleared.");
    clrscr();
    printf("This appears after clearing the screen.");
    return 0;
}
*/

// 2. 
/*
int main()
{
    printf("Enter a character: ");
    getch();
    return 0;
}
*/

// 3. 
/*
int main()
{
    printf("Enter a character: ");
    getche();
    return 0;
}
*/

// 4. 
/*
int main()
{
    char s = 'a';
    putch(s);
    return 0;
}
*/

// 5. Nu functioneaza
/*
int main()
 {
    char buffer[100];
    char *p;

    buffer[0] = 50;
    printf("Enter some characters:");
    p = cgets(buffer);
    printf("\nEntered characters: %s", p);
    return 0;
 }
*/

// 6. Nu functioneaza
/*
int main()
{
    cputs("Hola amigo!");
    return 0;
}
*/

// 7. Nu functioneaza
/*
int main()
{
    char name[50];
    cprintf("Enter your name: ");
    cscanf("%s", name);
    cprintf("\nHello, %s",name);
    return 0;
}
*/

// 8. 
/*
int main()
{
	int a = 0;
    do
    {	
    	a++; 
    	printf("%d ", a);
    } while (!kbhit());
}
*/

// 9. Nu functioneaza
/*
int main()
{
    int i;
    for (i = 1; i <= 10; i++) {
        textcolor(i);
        cprintf("studytonight");
        cprintf("\n\r");
    }
    textcolor(RED);
    cprintf("Bye");
    return 0;
}
*/

// 10. Nu functioneaza
/*
int main()
{
    int i;
    for (i = 1; i <= 10; i++) {
        textbackground(i);
        cprintf("studytonight");
        cprintf("\n\r");
    }
    textbackground(RED);
    cprintf("Bye");
    return 0;
}
*/

// 11. Nu functioneaza
/*
int main()
{
    printf("Welcome to studytonight.");
    printf("\nOnly this sentence will be cleared because we are using delline() only once.");
    delline();
    printf("\nThis appears after clearing the screen.");
    return 0;
}
*/

// 12. Nu functioneaza
/*
int main()
{
    int x = 90, y = 50;
    gotoxy(x, y);
    printf("The position of cursor is changed");
	return 0;
}
*/

// 13. Nu functioneaza
/*
int main()
{
    int x, y;
    cprintf("studytonight");
    x = wherex();
    y = wherey();
    cprintf("\n\rX and Y coordinates of the cursor are - (%d, %d)", x, y);
    return 0;
}

*/

//__________________________________________________________________________________________________________________________________________________________

// About <stdio.h> - stdio.h = standard input output .header

// 1. clearerr() - Șterge indicatorii de eroare asociați cu un anumit flux
// 2. fclose() - Închide fluxul și șterge tampoanele asociate fluxului dat
// 3. feof() - Verifică indicatorul de sfârșit de fișier al fluxului dat
// 4. ferror() - Verifică indicatorul de eroare al fluxului dat
// 5. fflush() - Șterge conținutul fluxului dat
// 6. fgetc() - Obține următorul caracter din fluxul dat
// 7. fgetpos() - Obține poziția curentă a fluxului dat
// 8. fgets() - Citește o linie din fluxul dat și o stochează într-o matrice de caractere
// 9. fopen() - Deschide un fișier în modul dat
// 10. fprintf() - Scrie rezultatul formatat într-un flux
// 11. fputc() - Scrie un caracter în fluxul dat
// 12. fputs() - Scrie un șir în fluxul dat, excluzând caracterul de încheiere nul
// 13. fread() - Citește datele din fluxul dat și le stochează într-o matrice
// 14. freopen() - Redeschide un flux cu fișier sau mod diferit
// 15. fscanf() - Citiți date formatate din fluxul dat
// 16. fseek() - Schimbă indicatorul de poziție al fluxului dat
// 17. fsetpos() - Setează indicatorul de poziție al fluxului dat
// 18. ftell() - Returnează poziția curentă a fluxului dat
// 19. fwrite() - Scrie date dintr-o matrice în fluxul dat
// 20. getc() - Obține următorul caracter din fluxul dat și incrementează indicatorul de poziție
// 21. getchar() - Returnează un caracter din fluxul stdin
// 22. gets() - Citește o linie din stdin și o stochează într-o matrice de caractere dată
// 23. perror() - Imprimă un mesaj de eroare către stderr
// 24. printf() - Imprimați datele formatate în stdout
// 25. putc() - Scrie un caracter în fluxul dat și incrementează indicatorul de poziție
// 26. putchar() - Scrie un caracter în fluxul stdout
// 27. puts() - Scrie un șir în fluxul stdout excluzând caracterul de încheiere nul
// 26. remove() - Șterge un fișier
// 27. rename() - Schimbă numele unui fișier existent
// 28. rewind() - Resetați indicatorul de poziție la începutul fișierului
// 29. scanf() - Citește datele formatate din stdin
// 30. setbuf() - Setează tampon pentru fluxul dat
// 31. setvbuf() - Setează tampon pentru fluxul dat cu diferite moduri de tamponare
// 32. sprintf() - Scrie datele formatate într-un șir dat
// 33. sscanf() - Citește datele formatate din șirul dat
// 34. tmpfile() - Creează un fișier temporar cu nume de fișier unic
// 35. tmpnam() - Generează un nume de fișier temporar unic și valid
// 36. ungetc() - Împinge un personaj înapoi la fluxul dat
// 37. vfprintf() - Scrie date formatate într-un flux folosind o listă de argumente
// 38. vprintf() - Imprimați datele formatate în stdout folosind o listă de argumente
// 39. vsprintf() - Scrie datele formatate într-un șir folosind o listă de argumente

//______________________________________________________________________________________________________________________________________________________

// About <stdlib.h> - stdlib.h = standard library .header

// 1. atof() - Convertește un șir in float *
// 2. atoi() - Convertește un șir in int *
// 3. atol() - Convertește un șir in long *
// 4. strtod() - Convertește un șir in double *
// 5. strtol() - Convertește un șir in long *
// 6. strtoul() - Convertește un șir in int long fără semn 
// 7. calloc() - La fel ca malloc(), dar initializeaza memoria alocata la zero *
// 8. free() - Elibereaza memoria alocata de calloc, malloc sau realloc si returneaza memoria sistemului *
// 9. malloc() - folosit pentru a aloca spatiu in memorie in timpul executiei programului *
// 10. realloc() - Modifica dimensiunea memoriei alocata prin functiile malloc() si calloc() la o dimensiune noua *
// 11. abort() - Inchide programul C *
// 12. atexit() - Setează o funcție care urmează să fie executată la terminarea programului
// 13. exit() - Încheie programul si nu returneaza nicio valoare *
// 14. getenv() - Primeste valoarea curenta a variabilei de mediu *
// 15. system() - Executa comenzi in afara programului C *
// 16. bsearch() - Efectuează căutarea binară într-o matrice sortată
// 17. qsort() - Sortează elementele unui tablou
// 18. abs() - Returnează valoarea absolută a unui nr intreg *
// 19. div() - Efectueaza o operatie de impartire *
// 20. labs() - Returnează valoarea absolută întreg lung
// 21. ldiv() - Returnează coeficientul și restul diviziunii întregi long
// 22. rand() - Returneaza numere intregi aleatoare *
// 23. srand() - Inițializați generatorul de numere aleatoare utilizat de funcția rand
// 24. mblen() - 
// 25. mbstowcs() -
// 26. mbtowc() -
// 27. wcstombs() -
// 28. wctomb() -
// 29. setenv() - Seteaza valoarea variabilei de mediu *
// 30. putenv() - Modifica valoarea unei variabile de mediu *
// 31. perror() - afiseaza cea mai recenta eroare care a avut loc in timpul unui apel de functie de librarie *
// 32. delay() - Suspenda executia programului pentru un anumit timp *

//____________________________________________________________________________________________________________________________________________________

// About <ctype.h> - ctype.h = 

//  isalnum() - verifica daca un caracter este alfanumeric
//  isalpha() - verifica daca un caracter este alfabetic
//  isblank() - 
//  iscntrl() - verifica daca este un caracter de control
//  isdigit() - verifică dacă caracterul este o cifră (digits)
//  isgraph() - reprezentare grafica
//  islower() - verifica daca un caracter este minuscula
//  isprint() - verifica daca caracterul este imprimabil
//  ispunct() - verifica daca caracterul este un caracter special	 
//  isspace() - verifica daca caracterul este spatiu alb
//  isupper() - verifica daca caracterul este o majuscula
//  isxdigit() - verifica daca caracterul este o cifra hexa	
//  tolower() - uppercase to lowercase
//  toupper() - lowercase to uppercase

//__________________________________________________________________________________________________________________________________________________

// About <string.h> - string.h = 

// memchr() - Acesta caută prima apariție a unui caracter în locația de memorie 	
// memcmp() - Compară primii n octeți ai două blocuri de memorie
// memcpy() - Copiază primii n octeți dintr-un bloc de memorie în altul
// memmove() -	Mută primii n octeți de la un bloc de memorie la altul, luând în considerare suprapunerea
// memset() - Copiază caracterul c în primii n octeți ai blocului de memorie
//| strcat() - Concateneaza str2 la sfarsitul str1 *
//| strncat() - Adauga o porniune de sir la alta *
//| strchr() - Returnează indicatorul la prima apariție a caracterului în str1 *
//| strrchr() - Acesta caută ultima apariție a unui caracter din șir *
//| strcmp() - Returnează 0 dacă str1 este același cu str2. Returnează <0 dacă strl < str2. Returnează >0 dacă str1 > str2 *
//| strcmpi() - La fel ca și funcția strcmp(). Dar, această funcție negociază cazul. „A” și „a” sunt tratate la fel *
//| strncmp() - Compară primele n caractere din două șiruri
//| strcpy() - Copiaza str2 in str1 *
//| strncpy() -	Copiază un număr dat de caractere dintr-un șir în altul *
// strcspn() -	Arata nr. de caractere care nu se gasesc care nu au fost gasite de un sir dat.
//| strlen() - Returnează lungimea unui șir *
//| strpbrk() -	Acesta caută prima apariție a oricărui caracter al unui șir dintr-un alt șir
// strspn() - Returnează lungimea segmentului inițial al unui șir care constă în întregime din caractere dintr-un alt șir
//| strstr() - Returnează indicatorul la prima apariție a lui str2 în str1 *
// strrstr() - Returnează indicatorul la ultima apariție a str2 în str1 *
//| strtok() - Rupe un șir în jetoane mai mici *
// strdup() - Duplica sirul *
//| strlwr() - Converteste sirul in minuscule *
//| strupr() - Converteste sirul in majuscule *
//| strrev() - Inverseaza sirul dat *
//| strset() - Seteaza toate caracterele dintr-un sir la caracterul dat *
// strnset() - Seteaza portiunea de caractere dintr-un sir la caracterul dat *

//_______________________________________________________________________________________________________________________________________________________

// About <math.h> 

//acos() - Returnează arcul cosinus în radiani
//asin() - Returnează arcul sinus în radiani
//atan() - Returnează arc-tangente în radiani
//atan2 - Returnează arc-tangente cu doi parametri
//ceil - Returnează cea mai mică valoare întreagă mai mare sau egală cu x
//cos - Returnează cosinusul unui unghi în radiani
//cosh - Returnează cosinusul hiperbolic
//exp - Returnează valoarea lui e ridicată la puterea lui x(e^x)
//fabs - Returnează valoarea absolută a lui x
//floor - Returnează cea mai mare valoare integrală mai mică sau egală cu x
//fmod - Returnează restul în virgulă mobilă a lui x împărțit la y
//frexp - Desparte numărul în virgulă mobilă x în mantisa sa și un exponent întreg de 2
//idexp - Returnează rezultatul înmulțirii x cu 2 ridicat la puterea exponentului
//log - Returnează logaritmul natural (logaritmul de bază-e) al lui x
//log10 - Returnează logaritmul comun (logaritmul de bază 10) al lui x
//modf - Desparte un număr cu virgulă mobilă într-o parte integrală și o parte fracționară
//pow - Returnează baza ridicată la puterea exponentului (x^y)
//sin - Returnează sinusul unui unghi radian
//sinh - Returnează sinusul hiperbolic al unui unghi radian
//sqrt - Returnează rădăcina pătrată a unui număr
//tan - Returnează tangenta unui unghi radian
//tanh - Returnează tangenta hiperbolică a unui unghi radian


//__________________________________________________________________________________________________________________________________________________

// Tablouri - new info 
// printf("%d ", i[arr]); echivalent cu printf("%d ", arr[i]); sau printf("%d ", *(arr+i));
// printf("%d ", arr+i); -> afiseaza adresele elementelor matricei
// int n = sizeof(arr) / sizeof(arr[0]); - in n se afla marimea tabloului

//__________________________________________________________________________________________________________________________________________________
// How works strlwr() and strupr() - string.h
/*
int main()
{
	char *a;

	printf("Enter a string: ");
	gets(a);
	printf("%s", a);

	printf("\nString uppercase: %s\n", strupr(a));

	printf("String lowercase: %s\n", strlwr(a));

	return 0;
}
*/

//__________________________________________________________________________________________________________________________________________________
// How works strcat() and strncat() - string.h

// int main(void)
// {
// 	char first[50] = "Buna dimineata, ";
// 	char last[50];
// 	char end[5] = {'!'};

// 	/*strcat(first, "domnule Beniamin!");
// 	printf("%s\n", first);*/

// 	printf("Enter your name: ");
// 	gets(last);

// 	char *data = strcat(first, last);
// 	data = strcat(first, end);

// 	printf("%s\n", data);

// 	char dest[20] = "This and ";
// 	char src[5] = "that!";

// 	strncat(dest, src, 2); // 2-ul face sa afiseze doar primele 2 caractere din src
// 	printf("%s\n", dest);

// 	return 0;
// }


//__________________________________________________________________________________________________________________________________________________
// How works strcmp() - string.h
// Daca sirurile sunt egale, se returneaza 0
/*
int main(void)
{
	char s1[] = "This is the way.";
	char s2[] = "This is the way.";

	if(strcmp(s1, s2) == 0)
		printf("Sirurile sunt egale.\n");
	else
		printf("Sirurile NU sunt egale.\n");

	return 0;
}
*/

//__________________________________________________________________________________________________________________________________________________
//How works strpbrk() - string.h
/*
int main(void)
{	
	char *s = "Benimain 743 sferciuc programator de top! 743279";

	char *search = "0123456789";
	char *f = ",./";

	char *find = strpbrk(s, f);

	if(find == NULL)
		printf("Elementele nu au fost gasite.");

	return 0;
}
*/

//__________________________________________________________________________________________________________________________________________________
// How works strrchr() - string.h
/*
int main()
{
	char *s = "some,data,2in,commas";

	char *word = strrchr(s, '2');

	printf("%s\n", word);

	return 0;
}*/

//__________________________________________________________________________________________________________________________________________________
// How works strstr() -string.h

/*int main()
{
	char s[] = "This is the way.";
	char needle[] = "the";
	char *f = "now"; 

	char *search = strstr(s, needle);
	char *search2 = strstr(s, f);

	printf("... %s\n", search);
	if(search2 == NULL)
	{
		printf("Nu a fost gasit.\n");
	}

	return 0;
}*/

//__________________________________________________________________________________________________________________________________________________
// How works strtok() - string.h
// string token

/*int main(void)
{
	char s[] =  "Thisabe ias the way.";

	char* portion1 = strtok(s, d);
	printf("%s\n", portion1);

	char* portion2 = strtok(NULL, d);
	printf("%s\n", portion2);

	char* portion3 = strtok(NULL, d);
	printf("%s\n", portion3);

	char* again = strtok(NULL, d);

	if(again == NULL)
		printf("Done!\n");
	else
		printf("More!\n");

	char *piece = strtok(s, " "); // sau folosind variabila;

	while(piece != NULL)
	{
		int k = 0;
		printf("%s\t%d", piece, strlen(piece));
		piece = strtok(NULL, " ");

		for (int i = 0; i <= strlen(piece)-1; i++)
		{
			if (strchr("aeiou", piece[i]) != 0)
			{
				k++;
			}
		}
		printf(" %d\n", k);
	}

	return 0;
}
*/

//__________________________________________________________________________________________________________________________________________________
// How works strchr() - string.h
/*
int main()
{
	char* string = "Test a for multiple vowels in a text";

	char *vo = "aeiouAEIOU";

	int k = 0;
		
	for (int i = 0; i < strlen(string); ++i)
	{
		if(strchr(vo, string[i]) != NULL)
		{
			k++;
			printf("%c\n", string[i]);	
		}

	}

	printf("%d\n", k);	
}
*/
/*
void display_array(float *arr, int size)
{
	printf("Notele elevilor sunt: \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%.2f, ", *(arr + i));
	}
	printf("\b\b.\n");
}

float* get_grades_students(int size)
{
	float* grades_students = (float*)malloc(size * sizeof(float));

	printf("Introduceti notele studentilor: \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d = ", i + 1);
		scanf("%f", (grades_students + i));
	}

	return grades_students;
}

float* storage_high_grades(float *storage_grades_students, int size, int *store_high_greades)
{
	int counter = 0, k;

	for (int i = 0; i < size; ++i)
	{
		if (*(storage_grades_students + i) > 9)
			counter++;
	}

	*store_high_greades = counter;

	float* high_grades = (float*)malloc(counter * sizeof(float));

	for (int i = 0, k = 0; i < size; ++i)
	{
		if (*(storage_grades_students + i) > 9)
		{
			*(high_grades + k) = *(storage_grades_students + i);
			k++;
		}
	}

	return high_grades;
}

int main(void)
{
	int n, size_high_grades;
	float *storage_grades_students;
	float *high_grades;

	printf("Introduceti numarul de elevi: ");
	scanf("%d", &n);

	if(n > 30)
	{
		printf("Ati introdus prea multi studenti!\n");
		printf("Apasati orice tasta si incercati din nou, introducand maxim 30 de studenti.\n");
		printf("Tastati: ");
		getch();
		return 1;
	}

	storage_grades_students = get_grades_students(n);
	display_array(storage_grades_students, n);

	high_grades = storage_high_grades(storage_grades_students, n, &size_high_grades);
	display_array(high_grades, size_high_grades);

	return 0;
}

*/


// Ordonare cuvinte
/*int word_compare(const void *a, const void *b) 
{
    return strcmp(*(char **)a, *(char **)b);
}

int main() 
{
	//Citire sir
    char input[100];

    printf("Enter a string: ");
    gets(input);

    //Stocarea marimea sirului
    int len = strlen(input); //17

    //Variabila pointer
    char *words[len];

    int i, j, k;
    for (i = 0, j = 0, k = 0; i <= len; i++) 
    {
        if (input[i] == ' ' || input[i] == '\0') 
        {
            words[j] = (char *)malloc(k + 1);
            strncpy(words[j], input + i - k, k);
            words[j][k] = '\0';
            j++;
            k = 0;
        } 
        else 
        {
            k++;
        }
    }

    int word_count = j;

    qsort(words, word_count, sizeof(char *), word_compare);

    for (i = 0; i < word_count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
*/


#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    switch(c) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int isConsonant(char c) {
    return !isVowel(c);
}

void removeConsonants(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i]; i++) {
        if (isConsonant(str[i]) || i > 0) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Initial string: %s\n", str);
    
    removeConsonants(str);
    printf("Final string: %s\n", str);
    return 0;
}
