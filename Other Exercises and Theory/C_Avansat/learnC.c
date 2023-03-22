#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <conio.h>
#include <errno.h>
#include <stdarg.h>
#include <assert.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

/*
int main()
{
	FILE *fp = NULL;
	char ch;
	fp = fopen("one.txt", "w");
	printf("Enter date...");
	while((ch == getchar()) != EOF)
	{
		putc(ch, fp);
	}

	fclose(fp);

	fp = fopen("one.txt", "r");

	while((ch = getc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}*/
//__________________________________________________________________________________________________________________________________________
// Crearea unui fisier cu text 
/*
struct emp
{
	char name[20];
	int age;
};

void main()
{
	struct emp e;
	FILE *p, *q;

	p = fopen("one.txt", "a");
	q = fopen("one.txt", "r");

	printf("Enter Name and Age: ");
	scanf("%s %d", e.name, &e.age);

	fprintf(p, "%s %d", e.name, e.age);
	fclose(p);
	fflush(p);
	do
	{
		fscanf(q, "%s %d", e.name, e.age);
		printf("%s %d", e.name, e.age);
	}
	while(!feof(q));
}
*/
//__________________________________________________________________________________________________________________________________________
// Crearea unui fiser binar
/*
int main()
{
	const char *mytext = "The quick brown fox jumps over the lazy dog";   
	FILE *bfp;
	bfp = fopen("test.txt", "wb");   
	if (bfp) 
	{     
	    fwrite(mytext, sizeof(char), strlen(mytext), bfp);     
	    fclose(bfp);   
	}
	return 0;
}
*/
//__________________________________________________________________________________________________________________________________________
// Imprima numele tuturor fișierelor prezente într-un director
// DIR, opendir(), readdir(), dirent, closedir(), ".", "->", d_name
/*
int main(void)
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

    return(0);
}
*/
//__________________________________________________________________________________________________________________________________________
// Despre typedef - mai jos se poate folosi mat in loc de int mat[10][10]
// typedef int mat[10][10];

// void citire_mat(mat x, int line, char* m)
// {
// 	printf("Acum introduceti elementele matricei %s: \n", m);
// 	for (int i = 0; i < line; i++)
// 	{
// 		for (int j = 0; j < line; j++)
// 		{
// 			printf("mat[%d][%d] = ", i, j);
// 			scanf("%d", &x[i][j]);
// 		}
// 	}
// }

// void afisare_mat(mat x, int line, char* m)
// {
// 	printf("Matricea %s este: \n", m);
// 	for (int i = 0; i < line; i++)
// 	{
// 		for (int j = 0; j < line; j++)
// 		{
// 			printf("%5d", x[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// void produs_mat(mat x, mat y, mat z, int line)
// {
// 	printf("Matricele inmultite sunt: \n");
// 	for (int i = 0; i < line; i++)
// 	{
// 		for (int j = 0; j < line; j++)
// 		{
// 			x[i][j] = y[i][j] * z[i][j];
// 		}
// 	}
// }

// int main(void)
// {
// 	mat a, b, c;
// 	int n;

// 	printf("Introduceti numarul de linii/coloane(matrice patratica): ");
// 	scanf("%d", &n);

// 	citire_mat(a, n, "A");
// 	afisare_mat(a, n, "A");

// 	citire_mat(b, n, "B");
// 	afisare_mat(b, n, "B");

// 	produs_mat(c, a, b, n);
// 	afisare_mat(c, n, "A*B");

// 	return 0;
// }

//__________________________________________________________________________________________________________________________________________
// #include <limits.h>
// #include <float.h>

// int main() {

//     printf("CHAR_BIT    :   %d\n", CHAR_BIT); // 8
//     printf("CHAR_MAX    :   %d\n", CHAR_MAX); // 127
//     printf("CHAR_MIN    :   %d\n", CHAR_MIN); // -128
//     printf("INT_MAX     :   %d\n", INT_MAX); // 2147483647
//     printf("INT_MIN     :   %d\n", INT_MIN); // -2147483648
//     printf("LONG_MAX    :   %ld\n", (long) LONG_MAX); // 9223372036854775807
//     printf("LONG_MIN    :   %ld\n", (long) LONG_MIN); //-9223372036854775808
//     printf("SCHAR_MAX   :   %d\n", SCHAR_MAX); // 127
//     printf("SCHAR_MIN   :   %d\n", SCHAR_MIN); // -128
//     printf("SHRT_MAX    :   %d\n", SHRT_MAX); // 32767
//     printf("SHRT_MIN    :   %d\n", SHRT_MIN); // -32768
//     printf("UCHAR_MAX   :   %d\n", UCHAR_MAX); /255
//     printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX); // 4294967295
//     printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX); // 18446744073709551615	
//     printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX); // 65535

//     return 0;
// }

//__________________________________________________________________________________________________________________________________________
// Operatorul ternar
// condition ? value_if_true : value_if_false
// int main()
// {
// 	int a = 10, b = 5;
// 	int check = (a < b) ? a : b;

// 	printf("%d", check);

// 	return 0;
// }

//__________________________________________________________________________________________________________________________________________
// About Preprocesoare
//Toate comenzile preprocesorului încep cu un simbol hash (#).

// #define - inlocuieste o macrocomanda de preprocesor
// #include - insereaza un anumit antet dintr-un alt fisier
// #undef - nedefineste o macrocomanda de preprocesor
// #ifdef - returneaza adevarat daca aceasta macrocomanda este definita
// #idndef - returneaza adevarat daca aceasta macrocomanda nu este definita
// #if - testeaza daca o conditie de timp de compilare este adevarata
// #else - alternatica pentru #if
// #elif - #else si #if int-o singura afirmatie
// #endif - se termina preprocesorul conditiont
// #error - imprima un mesaj de eroare pe stderr
// #pragma - emite comenzi speciale catre compilator, folosind o metoda standardizata

// Exemple
// #define MAX_ARRAY 20 - aceasta inlocuieste MAX_ARRAY cu 20
// #undef FILE_SIZE + #define FILE_SIZE 42 - aceasta spune sa nu defineasca FILE_SIZE existente si sa il defineasca ca 42
// #ifndef MESSAGE + #define MESSAGE "You wish!" + #endif - aceasta spune sa defineasca MESSAGE numai daca MESSAGE nu este definit deja
// #ifdef DEBUG
	/* Your debugging statements here */ 
	//#endif

//__________________________________________________________________________________________________________________________________________
// Macro-uri predefinite
// 1. __DATE__ - data curenta ca un caracter literal in formatul "MMMDDYYYY"
// 2. __TIME__ - ora curenta ca un caracter literal in format "HH:MM:SS"
// 3. __FILE__ - acesta contine numele curent ca un sir literal
// 4. __LINE__ - aceasta contine nr. liniei curente ca o constanta zecimala
// 5. __STDC__ - definit ca 1 cand compilatorul respecta standardul ANSI

// Exemplu:

// int main()
// {
// 	printf("File: %s\n", __FILE__);
// 	printf("Date: %s\n", __DATE__);
// 	printf("Time: %s\n", __TIME__);
// 	printf("Line: %d\n", __LINE__);
// 	printf("ANSI: %d\n", __STDC__);

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// Operatori de preprocesor
// operatorul macro continuare ("\")
// O macrocomandă este în mod normal limitată la o singură \
linie. Operatorul de continuare macro (\) este folosit \
pentru a continua o macrocomandă prea lungă pentru o singură linie. 
// Exemplu: #define  message_for(a, b)  \
   			printf(#a " and " #b ": We love you!\n")
//__________________________________________________________________________________________________________________________________________
// operatorul stringize ("#")
// Operatorul stringize sau numere-semn ('#'), atunci când
// este utilizat într-o definiție macro, convertește un 
// parametru macro într-o constantă șir. Acest operator 
// poate fi utilizat numai într-o macrocomandă care are un 
// anumit argument sau o listă de parametri. 
// De exemplu:
// #define  message_for(a, b)  \
//    printf(#a " and " #b ": We love you!\n")

// int main(void) 
// {
//    message_for(Carole, Debra);

//    return 0;
// }
//__________________________________________________________________________________________________________________________________________
// operatorul Token Pasting ("##")
// Operatorul de lipire a simbolurilor (##) dintr-o 
// definiție macro combină două argumente. 
// Permite unirea a două jetoane separate în 
// definiția macro-ului într-un singur token. 
// De exemplu:

// #define tokenpaster(n) printf ("token" #n " = %d", token##n)

// int main(void) {
//    int token34 = 40;
//    tokenpaster(34);
//    return 0;
// }
//__________________________________________________________________________________________________________________________________________
// operatorul definit()
//este utilizat în expresiile constante pentru a 
// determina dacă un identificator este definit folosind 
// #define. Dacă identificatorul specificat este definit, 
// valoarea este adevărată (diferită de zero). 
// Dacă simbolul nu este definit, valoarea este falsă (zero).
// Exemplu: 
// #if !defined (MESSAGE)
// 	#define MESSAGE "You wish!"
// #endif
	
// int main()
// {
// 	printf("Here is the message: %s\n", MESSAGE);
// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// Conversie din int in double
// int main(void)
// {	
// 	int a = 17, b = 5;
// 	double result = a / b;

// 	printf("Result = %f", result);

// 	result = (double) a / b;
// 	printf("\nResult = %f", result);

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// #include <stdarg.h>
// macrocomenzi va_list, va_start, va_arg, va_end;
// float func(int num, ...)
// {
// 	va_list calc;
// 	float sum = 0;

// 	va_start(calc, num);
// 	for (int i = 0; i < num; i++)
// 	{
// 		sum = sum + va_arg(calc, int);
// 	}
// 	va_end(calc);

// 	return sum/num;
// }

// int main(void)
// {
// 	printf("Media aritmetica a numerelor este: %.2f", func(5, 10,2,5,4,5));

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
//About <assert.h> - sintaxa assert(expression);
// int main () {
//    int a;
//    char str[50];
	 
//    printf("Enter an integer value: ");
//    scanf("%d", &a);
//    assert(a >= 10);
//    printf("Integer entered is %d\n", a);

//    return(0);
// }

//__________________________________________________________________________________________________________________________________________
//Exercitiu - cate litere, cifre,...sunt intr-un sir
// void digit(char *text, int len);
// void letter(char *text, int len);
// void space(char *text, int len);
// void point(char *text, int len);
// void upper(char *text, int len);
// void lower(char *text, int len);

// int main()
// {
// 	char *p;
// 	p = (char*)malloc(100 * sizeof(char));

// 	printf("Introduceti un sir de caractere:\n");
// 	gets(p);

// 	//Cate caractere are?
// 	int len = strlen(p);
// 	printf("Sirul introdus contine %d de caractere!", len);

// 	//Cate cifre are?
// 	digit(p, len);
// 	letter(p, len);
// 	space(p, len);
// 	point(p, len);
// 	lower(p, len);
// 	upper(p, len);
	
// 	free(p);		

// 	return 0;
// }

// //Cate cifre are?
// void digit(char *text, int len)
// {
// 	int digit = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (isdigit(text[i]))
// 			digit++;
// 	}
// 	if (digit == 0)
// 		printf("\nSirul introdus nu contine deloc cifre!");
// 	else
// 		printf("\nSirul introdus contine %d cifre!", digit);
// }

// //Cate litere are?
// void letter(char *text, int len)
// {
// 	int letters = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (isalpha(text[i]))
// 		{
// 			letters++;
// 		}
// 	}
// 	if (letters == 0)
// 		printf("\nSirul introdus nu contine deloc litere!");
// 	else
// 		printf("\nSirul introdus contine %d litere!", letters);
// }

// //Cate spatii sunt?
// void space(char *text, int len)
// {
// 	int space = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (isspace(text[i]))
// 		{
// 			space++;
// 		}
// 	}
// 	if (space == 0)
// 		printf("\nNu exista spatii goale!");
// 	else
// 		printf("\nSirul introdus contine %d spatii!", space);
// }

// //Cate caractere speciale are?
// void point(char *text, int len)
// {
// 	int point = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (ispunct(text[i]))
// 		{
// 			point++;
// 		}
// 	}
// 	if (point == 0)
// 		printf("\nNu exista caractere speciale!");
// 	else
// 		printf("\nSirul introdus contine %d caractere speciale!", point);
// }

// void upper(char *text, int len)
// {
// 	int upper = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (isupper(text[i]))
// 		{
// 			upper++;
// 		}
// 	}
// 	if (upper == 0)
// 		printf("\nNu exista litere mari!");
// 	else
// 		printf("\nSirul introdus contine %d litere mari!", upper);
// }

// void lower(char *text, int len)
// {
// 	int lower = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		if (islower(text[i]))
// 		{
// 			lower++;
// 		}
// 	}
// 	if (lower == 0)
// 		printf("\nNu exista litere mici!");
// 	else
// 		printf("\nSirul introdus contine %d litere mici!", lower);
// }
//__________________________________________________________________________________________________________________________________________
//atoi() - converteste un sir in integer
// int main(void)
// {
// 	char input_str[20];
// 	printf("Introduceti un sir: ");
// 	gets(input_str);

// 	printf("Aceasta este conversia din char in int: %d\n", atoi(input_str));

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// Remove extra spaces
// int main()
// {
//     char str_input[100], str_output[100];
//     int i = 0, j = 0;
     
//     printf("Introduceti un sir: ");
//     gets(str_input);

// 	while(str_input[i] == ' '){
// 		i++;
// 	}

//     for(; str_input[i] != '\0'; i++)
// 	{
//       if(str_input[i] == ' ' && str_input[i - 1] == ' '){
// 		continue;
// 	  }
//       str_output[j++] = str_input[i];
//     }

//     printf("String without extra spaces: %s", str_output);
 
//     return 0;
// }
//__________________________________________________________________________________________________________________________________________
// De cate ori apare caracterele intr-un string
// int main()
// {
//     char str[100];
//     int i, frequency[256] = {0}; // 256 pentru ca ASCII e pana la 256

//     printf("Enter a String: ");
//     gets(str);
     
//     for(i = 0; str[i] != '\0'; i++)
//         frequency[str[i]]++;
     
//     printf("Frecventa caracterelor: \n");
//     for(i = 0; i < 256; i++)
//         if(frequency[i] != 0)
//             printf("%5c%10d\n", i, frequency[i]);                    

// 	// valoarea ASCII a lui A este 65 \
// 	frecvența['A']++ este egală cu frecvența[65]++
 
//     return 0;
// }
//__________________________________________________________________________________________________________________________________________
// subsir
// int main(){
//     char str[100], sub_str[100];
//     int i, len;

//     memset(sub_str, '\0', sizeof(sub_str));
     
//     printf("Enter a String \n");
//     gets(str);
     
//     printf("Introdu pozitia de start si lungimea subsirului: ");
//     scanf("%d %d", &i, &len);
     
//     strncpy(sub_str, str + i, len);
     
//     printf("sub_str is : %s \n", sub_str);
//     return 0;
// }

//__________________________________________________________________________________________________________________________________________
// Sortarea literelor
// void sortString(char* str_input, char* str_out);

// int main()
// {
//     char str_input[100], str_out[100];
     
//     printf("Introduceti un sir: ");
//     gets(str_input);
     
//     sortString(str_input, str_out);
//     printf("\nSirul sortat: %s", str_out);
 
//     return 0;
// }
 
// void sortString(char* str_input, char* str_out)
// {
//     int arr[256] = {0}, len, i, j;
//     len = strlen(str_input);
     
//     for(i = 0; i < len; i++)
//         arr[str_input[i]]++;
     
//     for(i = 0, j = 0; i < 256; i++)
// 	{
//         if(arr[i] != 0){
//             while(arr[i] > 0)
// 			{
//                 str_out[j++] = i;
//                 arr[i]--;
//             }
//         }
//     }
//     str_out[j] = '\0';
// }
//__________________________________________________________________________________________________________________________________________
// metoda: sortarea literelor
// int letter_compare(const void *a, const void *b) 
// {
//     return strcmp(a, b);
// }

// int main()
// {
// 	char str[100];
// 	printf("Introduceti un sir de caractere: ");
// 	gets(str);

// 	int len = strlen(str);

// 	qsort(str, len, sizeof(char), letter_compare);
// 	printf("%s", str);
// }
//__________________________________________________________________________________________________________________________________________
// gaseste vocalele si consonele dintr-un sir
// int main(void)
// {
// 	char s[100];
// 	char vowel[] = "aeiouAEIOU";
// 	char cons[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

// 	printf("Afla cate vocale sunt in sirul introdus!\n");
// 	printf("Introduceti un sir de caractere: ");
// 	gets(s);

// 	int k = 0;
// 	for (int i = 0; i < strlen(s); i++)
// 		if (strchr(vowel, s[i]) != NULL)
// 			k++;

// 	int c = 0;
// 	for (int i = 0; i < strlen(s); i++)
// 		if (strchr(cons, s[i]) != 0)
// 			c++;		

// 	printf("In sir sunt %d vocale, %d consoane si un total de %d caractere (inclusiv spatii)", k, c, strlen(s));

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
//about enum
/*
enum day {Luni, Marti, Miercuri, Joi, Vineri, Sambata, Duminica};
//		   0	  1		  2		  3		 4		 5		   6
typedef enum button {ON, OFF} Button;

Button press(Button current); // current !
void print_button(Button current);

int main(void)
{
	enum day azi = Luni;
	enum day ieri = Duminica;
	enum day maine = Marti;

	printf("%d\n", azi); // 0 - Luni este primul in list
	printf("%d\n", ieri); // 6 - Duminica este ultimul
	printf("%d\n", maine); // 1 - ...

	Button power = OFF;
	
	print_button(power); //off
	power = press(power); //transformare on
	print_button(power); //on
	power = press(power); // transformare off
	power = press(power); // transformare on
	print_button(power); // on

	return 0;
}

Button press(Button current)
{
	if (current == ON) return OFF;
	else return ON;
	
}

void print_button(Button current)
{
	if(current == ON) printf("ON\n");
	else if(current == OFF) printf("OFF\n");
}
*/
//__________________________________________________________________________________________________________________________________________
// Operatorul ternar
// int main()
// {
// 	int a = 5, b = 2;
// 	int c = 0;

// 	//metoda clasica
// 	//if (a == b) c == 10;
// 	//else c == 5;
	
// 	c = (a > b) ? 10 : 5; // echivalent cu metoda clasica
// 			// 10 pentru true
// 			// 5 pentru false

// 	printf("c: %d\n", c);

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// about memcpy() function
// copiază n caractere din zona de memorie sursa în zona de memorie destinatie
/*int main()
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	char d[27]; //26 de litere + '\0' 
	char c[27];

	memcpy(d, s, sizeof(char) * 27);
	printf("d: %s\n", d);

	strcpy(c, s);
	printf("c: %s\n", c);

	// cum sa copiezi un subsir de la un anume inceput si doar cateva caractere
	char e[11];
	memcpy(e, s + 8, sizeof(char) * 10);
	e[10] = '\0';

	printf("e: %s\n", e);


	return 0;
}*/
//__________________________________________________________________________________________________________________________________________
//about memset() function
//Copiază caracterul a în primii n octeți ai blocului de memorie
// int main()
// {
// 	char buffer[10];

// 	memset(buffer, 'a', sizeof(char) * 5); // echivalent cu for de jos
// 	memset(buffer + 5, 'c', sizeof(char) * 5); 

// 	// for (int i = 0; i < 10; i++)
// 	// 	buffer[i] = 'a';

	
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", buffer[i]);

// 	printf("\n");
	
// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
//about time library
/*
int main(void)
{	
	time_t now = time(NULL); //time(NULL) - returneaza timpul curent
	// time_t - este o variabila speciala
	printf("%ld\n", now);

	//sleep(5); // functie din <unistd.h> - aduga un nr de secunde la timpul curent
	// + tine programul blocat in acele secunde
	//time_t two_sec = time(NULL);
	//printf("%ld\n", two_sec);

	//difftime() - Returnează diferența de timp, în secunde (adică timpul de sfârșit – ora de începere)
	//double different = difftime(two_sec, now);
	//printf("differenta: %.2f\n", different);

	// ctime() - returnează un șir reprezentând ora locală 
	char* string_now = ctime(&now);
	printf("%s\n", string_now);
	// returneaza: www mmm dd hh:mm:ss yyyy

	return 0;
}
*/
/*
int main()
{
	//returneaza ora locala + altele(echivalent cu cea de sus)
	//time_t now;
	//time(&now);
	//printf("Now: %s\n", ctime(&now));

	time_t now = time(NULL);

	// nu e timpul local
	struct tm *timpul = gmtime(&now);	
	printf("\ntm_sec: %d\n", timpul->tm_sec);
	printf("tm_min: %d\n", timpul->tm_min);  
	printf("tm_hour: %d\n", timpul->tm_hour);
	printf("tm_mday: %d\n", timpul->tm_mday);
	printf("tm_mon: %d\n", timpul->tm_mon);
	printf("tm_year: %d\n", timpul->tm_year);
	printf("tm_wday: %d\n", timpul->tm_wday);
	printf("tm_yday: %d\n", timpul->tm_yday);
	printf("tm_isdst: %d\n\n", timpul->tm_isdst);

	struct tm *cur_time = localtime(&now);	

	printf("\ntm_sec: %d\n", cur_time->tm_sec);
	printf("tm_min: %d\n", cur_time->tm_min);
	printf("tm_hour: %d\n", cur_time->tm_hour);
	printf("tm_mday: %d\n", cur_time->tm_mday);
	printf("tm_mon: %d\n", cur_time->tm_mon);
	printf("tm_year: %d\n", cur_time->tm_year);
	printf("tm_wday: %d\n", cur_time->tm_wday);
	printf("tm_yday: %d\n", cur_time->tm_yday);
	printf("tm_isdst: %d\n", cur_time->tm_isdst);

	char *other_time = asctime(cur_time);
	printf("%s\n", other_time);

	cur_time->tm_sec = cur_time->tm_sec + 1;
	time_t new_time = mktime(cur_time);
	printf("now: %ld\n", now);
	printf("new_time: %ld\n", new_time);

	char s[100];
	strftime(s, 100, "%A %B %d", cur_time);
	printf("%s\n", s);
	
	// %a - Abreviere weekday name - Ex: Sun
	// %A - Full month name - Ex: Sunday
	// %b - Abreviere month name - Ex: Mar
	// %B - Full weekday name - Ex: March
	// %c - Date and time - Ex: Sun Aug 19 02:56:02 2023
	// %d - Day of the month(01-31) - Ex: 19
	// %H - Hour in 24h format(00-23) - Ex: 14 
	// %I - Hour in 12h format(01-12) - Ex: 05
	// %j - Day of the year(001-366) - Ex: 231
	// %m - Month number(01-12) - Ex: 08
	// %M - Minute(00-59) - Ex: 55
	// %p - AM or PM designation - Ex: PM
	// %S - Second (00-61) - Ex: 02
	// %U - Week number with Sunday as first day(00-53) - Ex: 33
	// %w - Weekday as a number with Sunday as 0 - Ex: 4
	// %W - Week number with Monday as first day(00-53) - Ex: 34
	// %x - Date representation - Ex: 08/19/12
	// %X -	Time representation - Ex: 02:50:06
	// %y - Year, last two digits (00-99) - Ex: 01
	// %Y - Year - Ex: 2012
	// %Z - Timezone name or abbreviation - Ex: CDT
	// %% - A % sign - Ex: %
 
	clock_t start, end;
	start = clock();
	for (int i = 0; i < 100000000; i++) { }
	end = clock();

	double total = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Time: %fs\n", total);
	
	return 0;
}
*/
//__________________________________________________________________________________________________________________________________________
// div() function - returneaza struct cu restul impartirii si rezultatul
/*
int main()
{
	int num = 10;
	int den = 3;

	//int result = num / den;
	//int rem = num % den;

	div_t result = div(num, den); // div_t este un typedef de tip struct
	// ldiv_t = ldiv(num, den); pentru tipul long

	printf("%d\n", result.quot);
	printf("%d\n", result.rem);


	return 0;
}
*/
//__________________________________________________________________________________________________________________________________________
// modf() function - imparte pe x in parte intreaga si ceea ce este dupa virgula
// int main(void)
// {
// 	double x = 2.75;
// 	double frac = 0;
// 	double integral = 0;

// 	frac = modf(x, &integral);
// 	printf("frac: %f\n", frac);
// 	printf("integral: %f\n", integral);

// 	return 0;
// }
//__________________________________________________________________________________________________________________________________________
// about <errno.h>
/*
extern int errno;

int main()
{
	FILE *f = NULL;
	printf("Errno before: %d\n", errno);
	f = fopen("one.txt", "r");

	if (f == NULL)
	{
		fprintf(stderr, "Errno after: %d\n", errno);

		perror("Error msg"); // echivalent cu codul de mai jos
		//fprintf(stderr ,"Error msg: %s\n", strerror(errno));
	}
	else
		fclose(f);
	
	getch();

	return 0;
}
*/
//__________________________________________________________________________________________________________________________________________
// about togo - face un salt peste o bucata de cod
// int main()
// {
// 	printf("Propozitia 1\n");
// 	goto end; // end - este arbitrar
// 	printf("Propozitia 2\n");
// 	end:
// 	printf("Propozitia 3\n");

// 	for (int i = 0; i < 5; i++)
// 		for (int j = 0; j < 5; j++)
// 			for (int k = 0; k < 5; k++)
// 			{
// 				printf("%d\n", k);
// 				if (k == 4) goto end_loop;
// 			}

// 	end_loop:		

// 	printf("The End\n");

// 	return 0;
// }

#include <stdint.h> // pentru SIZE_MAX
// about size_t type

// tipul size_t este un tip de bază întreg fără semn al
// limbajului C și C++. Este tipul rezultatului returnat de  
// operatorul sizeof. Mărimea tipului este aleasă astfel 
// încât să poată stoca dimensiunea maximă a unui tablou 
// posibil teoretic de orice tip. Pe un sistem pe 32 de
// biți, size_t va lua 32 de biți, pe unul pe 64 de biți 
// 64 de biți.

// int main(void)
// {
// 	char *string = "abcdef";
// 	int len = strlen(string);
// 	// strlen returneaza size_t (doar numere pozitive)
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("string[%d] = %c\n", i, string[i]);
// 	}
	
// 	int _int = 2147483647;
// 	printf("_int: %d\n", _int + 1);

// 	size_t _size_t = 2147483648;
// 	printf("_size_t: %zu\n", _size_t);

// 	printf("SIZE_MAX: %zu\n", SIZE_MAX);
	
// 	return 0;
// }

// size_t si ptrdiff_t - tipuri de variabile
// sunt utilizate pentru aritmetica adresei

// Ex: for(ptrdiff_t i = 0; i < n; i++)
//		a[i] = 0;

/*
// despre size_t
1) Este un tip de baza intreg fara semn al limbajului C/C++
2) Este returnat de operatorul sizeof
3) Mărimea tipului este aleasă astfel încât să poată stoca 
dimensiunea maximă a unui tablou posibil teoretic de orice tip
4) Pe un sistem pe 32 de biți, size_t va lua 32 de biți,
pe unul pe 64 de biți 64 de biți
5) Folosit de obicei pentru contoare de bucle,
indexare matrice și aritmetică de adrese
6) Un alt tip: uintptr_t sinonim cu size_t
7) Valoarea maximă posibilă a tipului size_t este constantă SIZE_MAX

// despre ptrdiff_t
1) Este un tip întreg cu semn de bază din limbajul C/C++
2) Mărimea tipului este aleasă astfel încât să poată stoca 
dimensiunea maximă a unui tablou posibil teoretic de orice tip
3) Pe un sistem pe 32 de biți, size_t va lua 32 de biți,
pe unul pe 64 de biți 64 de biți
4) Este tipul rezultatului unei expresii în care un pointer 
este scăzut din celălalt (ptr1-ptr2)
5) Folosit pentru contoare de bucle, indexare a matricei,
stocare a dimensiunilor și aritmetica adresei
6) Este sinonim cu intptr_t

! Tipurile size_t și ptrdiff_t vă permit să scrieți cod bine portabil
! Ca alternativă la size_t și ptrdiff_t, dezvoltatorii Windows pot folosi tipurile DWORD_PTR, SIZE_T, SSIZE_T etc. Cu toate acestea, este încă de dorit să se limiteze la tipurile size_t și ptrdiff_t
! Oriunde ai de-a face cu pointeri sau matrice, ar trebui să folosești tipurile size_t și ptrdiff_t
*/

//Read an Amount and Find Number of Notes
// int main() {  
//     int number;
// 	size_t i;
//     int notes[7] = {1000, 500, 100, 50, 10, 5, 1};
//     int noteCounter[7] = {0};  
  
//     printf("Introduceti un numar: ");  
//     scanf("%d", &number);  
       
//     for(i = 0; i < 7; i++) {
//         if(number >= notes[i]){
//             noteCounter[i] = number/notes[i];
//             number = number - noteCounter[i]*notes[i];
//         }
//     }
  
//     /* Print notes */
//     printf("Currency   Count\n");
//     for(i = 0; i < 7; i++)
// 		if (noteCounter[i] != 0)
// 			printf("%5d%9d\n", notes[i], noteCounter[i]);

//     return 0;  
// }

//Construieste un triunghi mic de 0 in mat 
/*
int main()
{
    int row, col, size, i, j;
    int mat[50][50];

    printf("Introduceti dimensiunea matricei patratice: ");
    scanf("%d", &size);
    row = col = size;

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &mat[i][j]);
        }
    }
 
    printf("Rezultatul:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            if(i < j)
                printf("%d ", 0);
			else 
                printf("%d ", mat[i][j]);
		}
        printf("\n");
    }
 
    return 0;
}
*/
//insert an element from an array
// int main(){
//     int arr[500], size, i, add, index;
     
//     printf("Introduceti dimensiunea vectorului: ");
//     scanf("%d", &size);
     
//     for(i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
     
//     printf("Introduceti numarul de adaugat in vector: ");
//     scanf("%d", &add);
//     printf("Introduceti pozitia unde sa inserati numarul nou: ");
//     scanf("%d", &index);

// 	index--;

// 	if (index <= size && index >= 0)
// 	{
// 		for(i = size; i > index; i--){
//         	arr[i] = arr[i-1];
// 		} 
// 		arr[index] = add;

// 		printf("Noul vector: \n");
//     	for(i = 0; i < size + 1; i++){
//         	printf("%d ", arr[i]);
//    		 }
// 	}
// 	else
// 		printf("Ati introdus un numar gresit!\nIncercati din nou.");

//     return 0;
// }

//delete an element from an array

// int main(){
//     int arr[500], size, i, index;
     
//     printf("Dimensiunea vectorului: ");
//     scanf("%d", &size);
     
//     for(i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
     
//     printf("Introduceti pozitia pe care doriti sa o stergeti: ");
//     scanf("%d", &index);
     
//     index--;

//     for(i = index; i < size - 1; i++){
//         arr[i] = arr[i + 1];
//     } 
     
//     printf("Updated Array\n");
//     for(i = 0; i < size - 1; i++){
//         printf("%d ", arr[i]);
//     }
         
//     return 0;
// }

#include <limits.h>
// Secound maximum element 
// int main()
// {
//     int arr[500], size, i;
//     int max, sMAX;
     
//     printf("Introduceti dimensiunea vectorului: ");
//     scanf("%d", &size);

//     if(size < 2){
//         printf("Dimensiunea vectorului trebuie sa fie mai mare decat %d", size);
//         return 0;
//     }
         
//     for(i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
     
//     max = sMAX = INT_MIN;
     
//     for(i = 0; i < size; i++){
//         if(arr[i] > max){
//             sMAX = max;
//             max = arr[i];
//         } else if (arr[i] > sMAX 
//             && arr[i] != max){
//             sMAX = arr[i];
//         }
//     }
     
//     printf("Second Maximum element: %d", sMAX);
         
//     return 0;
// }

// Remove duplicate
/*
int main(void)
{
	int arr[20];
	int size; 
	size_t i, j, k = 0;

	printf("Introduceti dimensiunea vectorului: ");
	scanf("%d", &size);

	printf("Acum introduceti elementele vectorului: \n");
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Elementele introduse sunt: {");
	for (i = 0; i < size; i++)
		printf("%d, ", arr[i]);
	printf("\b\b}");

	//Algoritmul de stergere a duplicatelor
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] == arr[i])
				break;
		}
		if (j == size)
		{
			arr[k] = arr[i];
			k++;
		}
	}
	
	printf("\nVectorul fara duplicate este: {");
	for (size_t i = 0; i < k; i++)
		printf("%d, ", arr[i]);
	printf("\b\b}");

	return 0;
}
*/
// Algoritm de sortare
// int main(void)
// {
// 	int size;
// 	int aux;

// 	printf("Introduceti dimensiunea vectorului: ");
// 	scanf("%d", &size);

// 	int *arr = (int*)malloc(size * sizeof(int));
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("arr[%d] = ", i);
// 		scanf("%d", &arr[i]);
// 	}
	
// 	//algoritmul de sortare (crescatoar)
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		for (size_t j = i + 1; j < size; j++)
// 		{
// 			if (arr[i] > arr[j])
// 			{
// 				aux = arr[j];
// 				arr[j] = arr[i];
// 				arr[i] = aux;
// 			}		
// 		}
// 	}

// 	printf("Vectorul sortat este: {");
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("%d, ", arr[i]);
// 	}
// 	printf("\b\b}");

// 	return 0;
// }

// operatori pe biti
// int main(void)
// {
// 	int x = 5;
// 	int r = x << 1;
// 	int a = x << 2;

// 	// 16 8 4 2 1
// 	//  0 0 1 0 1

// 	printf("r << 1: %d\n", r);
// 	printf("a << 2: %d\n", a);
// 	printf("x = %d\n", x); // 5

// 	int b = x >> 1;
// 	printf("b >> 1: %d\n", b);

// 	int i = 4;

// 	i = ~i; // operator ~: inverseaza bitii intre ei (0 cu 1 si 1 cu 0)
// 	// 0100 => 1011 = 11(decimal)
// 	printf("~i: %d\n", i);

// 	return 0;
// }

//Convertire nr intregi in nr hexa si octale
// int main()
// {
// 	int size;

// 	printf("Introduceti marimea vectorului: ");
// 	scanf("%d", &size);

// 	int a[size];

// 	printf("Introduceti un set de numere intregi: \n");
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("a[%d] = ", i + 1);
// 		scanf("%d", &a[i]);
// 	}

// 	for (size_t i = 0; i < size; i++)
// 	{
// 		if (i % 2 == 0)
// 		{
// 			printf("Hexa: %x\n", a[i]); // %x or %X
// 		}
// 		else
// 		{
// 			printf("Octal: %o\n", a[i]);
// 		}
		
// 	}

// 	return 0;
// }

// system("cls"); curata ecranul 

//about atof, atoi, atol
// int main()
// {
// 	char *float_convert = "98.45";
// 	char *int_convert = "94";
// 	char *long_int_convert = "234, 874, 574";

// 	//atof
// 	float float_result = atof(float_convert);
// 	//atoi
// 	int int_result = atoi(int_convert);
// 	//atol
// 	long int long_int_result = atol(long_int_convert);

// 	printf("float: %f\n", float_result);
// 	printf("int: %d\n", int_result);
// 	printf("long: %ld\n", long_int_result);
	
// 	return 0;
// }

//timpul petrecut in program
// time_t start, end;

// void spend() {
// 	time(&end);
// 	int timp = difftime(end, start);
// 	printf("Timpul petrecut in program: %ds\n", timp);
// }

// int main(void)
// {
// 	int nr;
// 	time(&start);
// 	atexit(spend);

// 	printf("Introduceti un numar natural: ");
// 	scanf("%d", &nr);

// 	return 0;
// }

// mai multe despre string-uri
// int main()
// {
// 	char a[100];

// 	printf("Introduceti un sir de caractere: ");
// 	fgets(a, 100, stdin); // metoda de citire a sirurilor de caractere;

// 	a[strlen(a) - 1] = '\0';
// 	for (size_t i = 0; i <= strlen(a); i++)
// 	{
// 		printf("%d ", a[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }

// sscanf
// int main(int argc, char *argv[])
// {
// 	char str[] = {"Andrew;New York;20;0"};
// 	char name[20] = {0};
// 	char city[20] = {0};
// 	unsigned int age;
	
// 	//				echivalente
// 	sscanf(str, "%[a-zA-Z ];%[^;];%u;%d", name, city, &age);
// 	printf("%s is in %s and is %u years old\n", name, city, age);

// 	return 0;
// }


int main(void)
{
	char *text1;
	char *text2 = (char*)malloc(sizeof(char));

	printf("Introduceti un sir de caractere (utilizand m.stack):\n: ");
	fgets(text1, 100, stdin);
	printf("%s", text1);

	printf("Introduceti un sir de caractere (utilizand m.Heap):\n: ");
	fgets(text2, 100, stdin);
	fputs(text2, stdout);
	printf("\n\n");
	

	return 0;
}

