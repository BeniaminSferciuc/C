#include <stdio.h>
#include <stdbool.h>

int main (void)
{	
	//bazele programarii

	/*int a, b;
	a=15;
	b=20;
	printf("Suma numerelor 15 + 20 este egala cu %i", a+b);
	return 0;*/
	
	/*int a = 10, b = 3, rezultat;
	rezultat = a % b;
	printf("Rezultatul a %% b este %d", rezultat);
	return 0;*/

	/*int i;
	i = 10;
	++i; //i = i + 1;
	printf("i = %d", i);
	return 0;*/

	//**pre increment
	/*int a, rezultat;
	a = 5; 
	rezultat = 4 - ++a;
	// ++a => a = a + 1 => a = 5 + 1 => a = 6
	// rezultat = a + ++a => rezultat = 5 + 6 => rezultatul = 11
	printf("Rezultatul: %d", rezultat);
	return 0;*/

	//**post increment
	/*int a, rezultat;
	a = 5; 
	rezultat = 4 + a++;
	// rezultatul = 4 + 5 (neincrementat) => rezultat = 9
	// a++ => a = a + 1 => a = 5 + 1 => a = 6
	printf("Rezultatul: %d\r\n", rezultat);
	printf("%d", a);
	return 0;*/

	/*unsigned char x = 2;
	short int y = 10;
	y += x; // (echivalenta) y = y + x;
	
	// y += == y + x
	
	printf("y=%d\n", y);

	y -= x;
	printf("y=%d\n", y);

	y *= x;
	printf("y=%d\n", y);
	
	y /= x;
	printf("y=%d\n", y);

	y /= x;
	printf("y=%d", y);
	return 0;*/

	/*int a, b;
	a = 10;
	b = 20;
	a += b; // a = a + b => a = 30
	printf("a=%d\n", a);
	return 0;*/

	/*int a = 10, b = 20;
	printf("%d\t%d", a, b);
	return 0;*/

	/*int i;
	printf("Introduceti un nr aici:");
	scanf("%d", &i);
	printf("Numarul introdus este: %d\n", i);

	return 0;*/

	//Program: calculator al indexului corporal
	/*float weight, height, index;
	printf("Introduceti masa corporala (kg): ");
	scanf("%f", &weight);
	printf("Introduceti inaltimea (m): ");
	scanf("%f", &height);
	index = weight / (height * height);
	printf("Indexul corpului dvs. este: %.2f", index);
	return 0;*/

	/*int a, b, c;
	printf("Alegeti doua numere intregi pentru ecuatia c = (a + b) * (a-b)\nTastati doua numere intregi aici:");
	scanf("%d%d", &a, &b);
	c = (a + b) * (a-b);
	printf("c=%d", c);

	return 0;*/

	//conversie implicita (automata) din float in int (i = f)
	/*float f;
	int i;
	f = 3.14;
	i = f;
	printf("%d", i);
	return 0;*/

	//conversie explicita (manuala) din float in int => (int)f
	/*float f;
	f = 3.14;
	printf("%d", (int)f);
	return 0;*/

	//esec ♦ trasformare din int in float (nu exista)
	/*int x, y, z;
	x = 17;
	y = 11;
	z = x / y;
	printf("%d", (float)z);
	return 0;*/

	//exercitii de incrementare
	/*int x, y;
	x = 0;
	++x; //x = x + 1 => x = 0 + 1 => x = 1;
	y = ++x; // y = (++x) + (++x) => y = 1 + (x = x + 1 => x = 0 + 1 => x = 1) => y = 1 + 1 => y = 2;
	printf("y=%d\r\n", y);
	printf("\tx=%d\r\n", x);
	y = x++; // • y = 2 • x = 2 • ♦ ♦ y = 2 ♦ ♦ x++ = x = x + 1 => x = 3; 
	printf("\t\ty=%d\r\n", y);
	printf("\t\t\tx=%d\n", x);
	return 0;*/


	//exercitii de decrementare
	/*int x, y;
	x = 0; 
	--x;
	y = --x; 
	printf("y=%d\r\n", y);
	printf("\tx=%d\r\n", x);
	y = x--; 
	printf("\t\ty=%d\r\n", y);
	printf("\t\t\tx=%d\n", x);
	return 0;*/

	//about if 
	/*int x;
	printf("Introdu o valoare intreaga pentru comparatia cu 3 aici: ");
	scanf("%d", &x);

	if (x > 3)
	{
		printf("%d este mai MARE decat 3;\r\n", x);
	}
	
	if (x < 3)
	{
		printf("%d este mai mic decat 3;\r\n", x);
	}

	if (x >= 3)
	{
		printf("%d este mai mare sau egal decat 3;\r\n", x);
	}
	
	if (x <= 3)			
	{	
		printf("%d este mai mic sau egal decat 3;\r\n", x);
	}

	if (x == 3)
	{	
		printf("%d este egal cu 3;\r\n", x);
	}
	
	return 0;*/

	/*unsigned short int x;
	printf("Introduceti un numar pozitiv cuprins intre 0 si 10 aici:");
	scanf("%hu", &x);

	if(x != 3)
	{
		printf("%hu este diferit de 3;\r\nHello gorgeous!", x);
		printf("\r\n\tHello gorgeous!!!");
		printf("\r\n\t\tHello gorgeous!!!");
		printf("\r\n\t\t\tHello gorgeous!!!");
		printf("\r\n\t\t\t\tHello gorgeous!!!");
		printf("\r\n\t\t\t\t\tHello gorgeous!!!");
		printf("\r\n\t\t\t\t\t\tHello gorgeous!!!");
	}	

	return 0;*/

	/*unsigned short int x;
	printf("Introduceti un numar pozitiv cuprins intre 0 si 10 aici:");
	scanf("%hu", &x);

	if(x != 3)
	{
		printf("%hu este diferit de 3;\r\n", x);
		printf("Hello gorgeous!!!");		
	}
	
	return 0;*/

	/*int i;
	printf("Daca intorduceti un numar negativ, programul va va spune asta.\r\n");
	printf("Intorduceti un numar oarecare aici: ");
	scanf("%d", &i);
	if (i < 0)
	{
		printf("Ati introdus un numar negativ.\r\nNumarul este %d", i);
	}
	else
	{
		printf("Ati introdus un numar pozitiv.");
	}
	return 0;*/

	/*int i;
	printf("Introdu un nr intreg:");
	scanf("%d", &i);
	if (i >= 5)
	{
		printf("Numarul este mare sau egal decat 5.\r\n");
	}
	else
	{
		printf("Numarul este mai mic sau egal decat 5.");
	}
	return 0;*/

	/*int x = 10;
	int y = x == 10;
	printf("%d\r\n", y);
	printf("%d Bytes", sizeof(y)); 
	return 0;*/

	/*if (true)
	{	
		printf("Emir Kozguoglu");
	}*/

	/*float weight, height, index;
	printf("Introduceti masa corporala (kg): ");
	scanf("%f", &weight);
	printf("Introduceti inaltimea (m): ");
	scanf("%f", &height);
	index = weight / (height * height);
	printf("Indexul corpului dvs. este: %.2f", index);
	if (index > 24.8)
	{
		printf("\r\nRezultatul %.1f depaseste norma normala a indexului masei corporale.", index);
	}
	else
	{
		printf("\r\nRezultatul %.1f se incadreaza in norma normala a indexului masei corporale.", index);
	}
	return 0;*/

	//afisare pana la n numere prin incremetare
	/*int i;
	printf("Introdu un numar natural mai mic decat 256: ");
	scanf("%d", &i);
	for (int n = 0; n < i; n++)
	{
		printf("%d\t", n);
	}
	return 0;*/

	/*int i;
	printf("Introdu un numar natural: ");
	scanf("%d", &i);
	for (int n = 7; n < i; n++) //n++ => n = n + 1
	{
		printf("10");
	}
	return 0;*/

	/*int i;
	printf("Introdu un numar natural: ");
	scanf("%d", &i);
	if (i > 3)
	{
		printf("Numarul %d este mai mare decat 3.", i);
	}
	else
	{
		printf("Numarul %d este mai mic decat 3.", i);
	}
	return 0;*/

	/*int i;
	do
	{
		printf("Introdu un numar pozitiv si diferit de 0: ");
		scanf("%d", &i);
		if(i <= 0)
		{
			printf("!!!Acesta nu este un numar pozitiv!!!\n");
		}
	}
	while (i <= 0);

	for (int n = 0; n < i; n++) //n++ => n = n + 1
	{
		printf("#");
	}
	return 0;*/

	//doesn't work
	/*int i;
	do
	{
		printf("Introduceti un numar pozitv: ");
		scanf("%d", &i);
		if (i <= 0)
		{
			printf("Ati introdus un numar gresit.\n");
		}
	} 
	while (i < 0);
	
	for (int n = 0; n < i; n++)
	{
		printf("#");
	}

	return 0;*/

	/*int i;
	do
	{
		printf("Introdu un numar pozitiv si diferit de 0: ");
		scanf("%d", &i);
		if(i <= 0)
		{
			printf("!!!Acesta nu este un numar pozitiv!!!\n");
		}
	}
	while (i <= 0);

	for (int n = 0; n < i; n++) //n++ => n = n + 1
	{
		for (int m = 0; m < i; m++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;*/

	/*short int x;
	printf("Introdu un numar mai mic decat 32767: ");
	scanf("%d", &x);
	for (int y = 0; y < x; y++)
	{
		for (int z = 0; z < x; z++)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;*/

	/*int x;
	printf("Introdu un numar oarecare: ");
	scanf("%d", &x);

	if (x < 0)
	{
		printf("Numarul este negativ.");
	}
	else if (x == 0)
	{
		printf("Numarul este egal cu zero.");
	}
	else
	{
		printf("Numarul este pozitiv.");
	}
	return 0;*/

	//ver 3.0
	/*float weight, height, index;
	printf("Introduceti masa corporala (kg): ");
	scanf("%f", &weight);
	printf("Introduceti inaltimea (m): ");
	scanf("%f", &height);
	index = weight / (height * height);
	printf("Indexul corpului dvs. este: %.2f", index);
	if (index < 18.5)
	{
		printf("\r\nRezultatul %.1f este UNDERWEIGHT.", index);
	}
	else if (index <= 24.9)
	{
		printf("\r\nRezultatul %.1f se incadreaza in norma normala a indexului masei corporale.", index);
	}
	else if (index <= 29.9)
	{
		printf("\r\nRezultatul %.1f este OVERWEIGHT");
	}
	else if(index <= 34.9)
	{
		printf("\r\nRezultatul %.1f este OBESE");
	}
	else if (index >= 35)
	{
		printf("\r\nRezultatul %.1f este EXTREMLY OBESE");
	}

	return 0;*/

	//Inceput
	/*double x, y, result;
	char operation;

	printf("x = ");
	scanf("%lf", &x);

	printf("y = ");
	scanf("%lf", &y);

	printf("operation (+, -, *, /): ");
	scanf(" %c", &operation);

	//alternativa la if else
	switch (operation)
	{
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;	
		default :
			printf("Nu exista asa o operatie!!!");		
	}*/

	/*if (operation == '+')
	{
		result = x + y;
	}
	else if (operation == '-')
	{
		result = x - y;
	}
	else if (operation == '*')
	{
		result = x * y;
	}
	else if (operation = '/')
	{
		result = x / y;
	}
	else
	{
		printf("Nu suporta alt fel de operatie! \n");
	}*/

	/*printf("\nRezultat: %.2lf", result);

	return 0;*/

	/*const float pi = 3.14;
	float raza_cercului, Aria;
	printf("Introducti aici raza cercului (cm): ");
	scanf("%f", &raza_cercului);
	Aria = pi * raza_cercului * raza_cercului;
	printf("Aria cercului de raza %.0f este egala cu: %.2f cm", raza_cercului, Aria);
	return 0;*/

	/*
	char str[100];
	printf("Introduceti numele dvs.: ");
	fgets(str, sizeof(str), stdin);
	printf("Numele dvs. este: %s", str);
	printf("%d", sizeof(char));
	return 0;
	*/

	//Varianta 1 extinsa
/*int increment(int to_increment, int x)
{
	int result;

	result = to_increment + x;
	return result;
}


int main ()
{
	int i = 10;
	i = increment(i, 10);
	printf("i = %d", i);

	return 0;
}*/

//varianta 2 scurta
/*int increment(int valoarea_incrementata, int nr_de_incrementari)
{
	return valoarea_incrementata + nr_de_incrementari;
}


int main ()
{
	int i = 10;
	i = increment(i, 4); //functie
	printf("i = %d", i);

	return 0;*/
	
	/*void print_something()
	{
		printf("Eu codez ca un specialist.\n");
		printf("Eu codez ca un specialist.\n");
		printf("Eu codez ca un specialist.\n");
		return;
	}
	
	int main()
	{
		print_something();
		return 0;
	}*/
	
	/*
	int main(void)	
	{
		char s[10];
		printf("Scrie un nr aici: ");
		scanf("%s", &s);
		for(int i = 0; i <= 10; i++)
		{
			printf("[%s]\n", s);
		}
		return 0;
	}
	*/
	

}

