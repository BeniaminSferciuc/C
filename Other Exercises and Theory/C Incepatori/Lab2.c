#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

//functie fara argumente
/*int functie_functionala()
{
	int a = 10, b = 5, cor;
	b++;
	cor = a + b;
	return cor;
}

int main()  
{	
unsigned long long int functie;
functie = functie_functionala(); //aici se va returna resultatul funtiei (in variabila functie)
printf("%d", functie);
return 0;
}*/

/*int incr(int cine_este_incrementat, int cu_cat_este_incrementat, int inmultire)
{
	int result;
	result = (cine_este_incrementat + cu_cat_este_incrementat)*inmultire;
	return result;
}

int main()
{
	int i = 10;
	i = incr(i, 7, 2);
	printf("i = %d", i);
	return 0;
}*/

// program putin redus, adica in return se va scrie instrctiunile)
/*int incr(int cine_este_incrementat, int cu_cat_este_incrementat, int inmultire)
{
	return (cine_este_incrementat + cu_cat_este_incrementat)*inmultire;
}

int main()
{
	int i = 10;
	i = incr(i, 7, 2);
	printf("i = %d", i);
	return 0;
}*/

//void = nimic in programare
 
/*void print_some();
 int main()
 {
 	print_some();
 	return 0;
 }
 void vo_hello()
 {
 	printf("hellouuuuuu\n");
 }
 void print_some()
{
	printf("Hello\n");
	printf("Hello\n");
	printf("Hello\n");
	vo_hello();
	return;	
}*/

/*int var_globala = 0;

void var_locala()
{
	var_globala = 10;
}

int main()
{
	printf("var_globala = %d", var_globala);
	var_locala();
	printf("var_globala = %d", var_globala);
	return 0;
}*/

//tablouri !!!!
/*int main()
{
	unsigned char nota[5];

	nota[0] = 10;
	nota[2] = 8;
	nota[3] = 4;
	nota[4] = 8;
	nota[5] = 9;
	printf("Nota 1 = %d\n", nota[0]);
	printf("Nota 2 = %d\n", nota[1]);
	printf("Nota 3 = %d\n", nota[2]);
	printf("Nota 4 = %d\n", nota[3]);
	printf("Nota 5 = %d\n", nota[4]);
	return 0; 
}*/


//metoda de tablou mai putin eficienta 
/*int main()
{
	int variabila[5];

	variabila[0] = 10;
	variabila[1] = 20;
	variabila[2] = 30;
	variabila[3] = 40;
	variabila[4] = 40;

	printf("Variabila Tablou 1 are valoarea: %d\n", variabila[0]);
	printf("Variabila Tablou 2 are valoarea: %d\n", variabila[1]);
	printf("Variabila Tablou 3 are valoarea: %d\n", variabila[2]);
	printf("Variabila Tablou 4 are valoarea: %d\n", variabila[3]);
	printf("Variabila Tablou 5 are valoarea: %d\n", variabila[4]);
 
	return 0;
}*/

//metoda de tablou eficienta
/*int main()
{
	const int variabila[] = {10, 20, 30, 40, 50};

	printf("Variabila Tablou 1 are valoarea: %d\n", variabila[0]);
	printf("Variabila Tablou 2 are valoarea: %d\n", variabila[1]);
	printf("Variabila Tablou 3 are valoarea: %d\n", variabila[2]);
	printf("Variabila Tablou 4 are valoarea: %d\n", variabila[3]);
	printf("Variabila Tablou 5 are valoarea: %d\n", variabila[4]);
 
	return 0;
}*/

//generator de numere random;
/*
int get_random()
{
	int result;
	result = rand() % 20000;
	return result;
}

int main()
{
	int random;
	
	srand(time(NULL));
	do
	{
		random = get_random();
		printf("%d\n", random);
	}
	while(random != 100);
	return 0;
}
*/



/*int main()
{
	int calcul[3];
	printf("Introdu o valoare pentru a = ");
	scanf("%d", &calcul[0]);
	printf("Introdu o valoare pentru b = ");
	scanf("%d", &calcul[1]);
	calcul[2] = calcul[0] % calcul[1];
	if(calcul[2] != 0)
	{
		printf("Numarul %d este impar", calcul[2]);
	}
	else
	{
		printf("Numarul %d este par", calcul[2]);	
	}

	return 0;
}*/

// afiseaza numerele impare
/*int main()
{
	int i;
	for(i = 1; i <= 20; i++)
	{
		if(i % 2 != 1)
		{
			continue;
		}
		printf("i = %d\n", i);
	}
	return 0;
}*/

// afiseaza numerele impare
/*
int main()
{
	int i;
	for(i = 1; i <= 20; i++)
	{
		if(i % 2 != 0)
		{
			continue;
		}
		printf("i = %d\n", i);
	}
	return 0;
}
*/


// lucrand cu timpul 
// sintaxa generala: time_t nume_variabila = time(NULL);
// *functia: sleep(nr.sec) - o apelam prin libraria <unistd.h> 
// *functia: difftime(var1, var2)
// Metoda 1 (sintaxa): tip de data variabila = functia(argumente);
// Functia ctime: transforma timpul in sir
// Sintaxa: tip de data *var2 = ctime(&var1) | var1 este variabila din time_t


int main()
{
	/*
	time_t now = time(NULL);
	char *time = ctime(&now);
	printf("%s\n", time);
	struct tm *segmente_time = gmtime(&now);
	printf("Timpul in secunde este: %i\n", segmente_time -> tm_sec); // extragere nr de secunde
	printf("Timpul in minute este: %i\n", segmente_time -> tm_min); // extragere nr de minute
	printf("Timpul in ore este: %i\n", segmente_time -> tm_hour); // extragere nr de ore ramase pana la 24:00
	printf("Timpul in ziua lunii este: %i\n", segmente_time -> tm_mday); //extragere nr zilei din luna
	printf("Timpul in nr lunii este: %i\n", segmente_time -> tm_mon); // extragere nr lunii
	printf("Timpul in ani este: %i\n", segmente_time -> tm_year); // extragere nr ???
	printf("Timpul in ziua saptamanii este: %i\n", segmente_time -> tm_wday); // extragere nr zilei din saptamana
	printf("Timpul in ziua anului este: %i\n", segmente_time -> tm_yday); // extragere nr zilei n din an
	printf("Timpul in ??? este: %i\n", segmente_time -> tm_isdst); // ????
	printf("\n");

	struct tm *ptime = localtime(&now);
	printf("Timpul in secunde este: %i\n", ptime -> tm_sec); // extragere nr de secunde
	printf("Timpul in minute este: %i\n", ptime -> tm_min); // extragere nr de minute
	printf("Timpul in ore este: %i\n", ptime -> tm_hour); // extragere nr de ore ramase pana la 24:00
	printf("Timpul in ziua lunii este: %i\n", ptime -> tm_mday); //extragere nr zilei din luna
	printf("Timpul in nr lunii este: %i\n", ptime -> tm_mon); // extragere nr lunii
	printf("Timpul in ani este: %i\n", ptime -> tm_year); // extragere nr ???
	printf("Timpul in ziua saptamanii este: %i\n", ptime -> tm_wday); // extragere nr zilei din saptamana
	printf("Timpul in ziua anului este: %i\n", ptime -> tm_yday); // extragere nr zilei n din an
	printf("Timpul in ??? este: %i\n", ptime -> tm_isdst); // ????

	char *other_time = asctime(ptime);
	printf("%s", other_time);
	*/


	/*time_t now = time(NULL);
	char *time = ctime(&now);
	struct tm *ptime = localtime(&now);
	{
	printf("Secunde: %i\n", ptime -> tm_sec); 
	printf("Minute: %i\n", ptime -> tm_min); 
	printf("Ora: %i\n", ptime -> tm_hour); 
	printf("Ziua lunii: %i\n", ptime -> tm_mday); 
	printf("Luna: %i\n", ptime -> tm_mon); 
	printf("Anul: %i\n", ptime -> tm_year); 
	printf("Ziua saptamanii: %i\n", ptime -> tm_wday); 
	printf("Ziua anumui: %i\n", ptime -> tm_yday); 
	printf("Ora de vara/iarna: %i\n", ptime -> tm_isdst); 
	};
	char *asktime = asctime(ptime);
	printf("%s\n", asktime);

	char s[50];
	strftime(s, 50, "%a %B %I%p %S %Z", ptime);
	printf("%s\n", s);

	return 0;*/

	/*time_t now = time(NULL);
	char *tik = ctime(&now);
	printf("%s\n", tik);
	struct tm *time = localtime(&now);
	{
		printf("Secunde: %i\n", time -> tm_sec); 
		printf("Minute: %i\n", time -> tm_min); 
		printf("Ora: %i\n", time -> tm_hour); 
		printf("Ziua lunii: %i\n", time -> tm_mday); 
		printf("Luna: %i\n", time -> tm_mon); 
		printf("Anul: %i\n", time -> tm_year); 
		printf("Ziua saptamanii: %i\n", time -> tm_wday); 
		printf("Ziua anumui: %i\n", time -> tm_yday); 
		printf("Ora de vara/iarna: %i\n", time -> tm_isdst);
	};
	char s[50];
	strftime(s, 50, "%A %b %c%p", time);
	printf("%s\n", s);
	
	return 0; 


}	
*/
	// && = si
	// || = sau 
	/*
	int main()
	{
		int result = 1 || 0;
		printf("%d", result); 
		return 0;
	}
	*/

		// 1) Construiti un program care sa calculeze aria unui cerc.
	/*const float pi = 3.14;
	float r, aria;
	printf("Intoruceti aici raza cercului: ");
	scanf("%f", &r);
	aria = pi * r * r;
	printf("Aria cercului de raza %.1f este egala cu: %.2f", r, aria);

	return 0;*/

	// 2) about double
	/*double u = 3.8e6;
	printf("%.0lf", u);*/

	// 3) 
	/*char caracter = 'U';
	printf("%c", caracter);
	printf("\n%d", caracter);*/

	// 4) Transformare din zecimal in hexazecimal
	/*int transformare;
	transformare = 7534;
	printf("%x", transformare);*/

	/*char c;
	int i;
	double d;
	long long l;
	printf("%zu\n%zu\n%zu\n%zu", sizeof(c), sizeof(i), sizeof(d), sizeof(l));
	*/
	
	/*char c = '8';
	int i = 12;
	int result = c + i;
	printf("%d", result);

	return 0;*/


	/*int i = 8;
	float f = 7.78;
	float r = i + f;
	printf("%.2f", r);*/

	/*int age;
	printf("Introdu varsta ta: ");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("Accesul este acceptat");
	}
	else
	{
		printf("Accesul nu este acceptat");

	}*/

	/*int age = 20;
	age >= 40 ? 
	printf("You can vote") : printf("You can't vote");
	return 0;*/


	/*int i, j, r;
	i = 8;
	j = 3;
	r = i % j;
	printf("%d", r);
	return 0;*/

	/*char operation = '+', '-', '*', '/';
	int a, b;
	float rezultat;
	printf("Introdu o valoare pentru a= ");
	scanf("%d", &a);
	printf("Introdu o valoare pentru b= ");
	scanf("%d", &b);
	if (operation == '+')
	{
		rezultat = a + b;
		printf("%d", rezultat);
	}

	return 0;*/

	/*int n;
	n = 100;
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", i);
	}
	return 0;*/

	// despre while - cicluri (efectuari repetitive)
	/*while (conditie)
	{
		instructiuni; (!While este similar cu if, insa 
		acesta va efectua instructiunile pana cand vor
		adevarate)

	}*/

	// in while putem folosi incrementarea, break, continue
	
	// aici am scris de 5 ori "Hello, World!"
	/*int i;
	i = 0;
	while(i < 5)
	{
		printf("Hello, World!\n");
		i++;
	}
	return 0;*/

	/*int i;
	i = 10;

	while(i < 20) // 10 > 0 -> Da, asadar mergem la instructiuni
				// 9 > 0 -> -||-
				// ... 0 > 0 -> Nu, asadar ne oprim;
	{
		printf("i = %d\n", i);
		i++;
	}
	return 0;*/
	//in while - cat timp o conditie este adevarata se vor executa instructiunile
	/*float i;
	i = 30;
	while(i > 0)
	{	// 27 / 3 == 9 | 9 / 3 == 3 | 3 / 3 = 1 | 0 ups i !=0 stop
		printf("i = %.1f\n", i);
		i = i / 2;
	}*/

	//constructia pentru while:
	// while (conditie)
	// { Instructiuni}

	//constructia pentru do while
	// do 	"dowhile efectueaza instructiunile atat timp cat condiile sunt adevarate "			
	// {Instructiuni} while (conditie)

	//in while mai intai are loc verificarea conditie si apoi a instructiunilor
	// la do while mai intai este verificata instructiunea si apoi conditia

	/*int i = 10;

	while(i < 5)
	{
		printf("While la putere;");
	}

	do  // in dowhile, in cazul in care conditia este falsa, blocul de instructiuni se va efectua macar o data
	{
		printf("Do while la putere;");
	}
	while (i < 5);*/

	/*char input = 0;
	printf("q - exit\r\n");
	
	do
	{
		printf("Introdu o comanda: ");
		scanf(" %c", &input);
		if (input == 'q')
		{
			printf("Sunteti in pagina principala (home)");
		}

	}
	while (input != 'q');*/