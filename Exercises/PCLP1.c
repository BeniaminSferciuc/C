#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

// Probleme de la pclp_1
// Ex.1)
/*
int main()
{
	printf("Numele studentului: Beniamin Sferciuc\n");
	printf("Grupa: 3111a\n");
	printf("Specializarea: Calculatoare");
	return 0;
}
*/

// Ex.2)
/*
int main()
{
	printf("NrMatricol\tStudent\t\tMedia\n");
	printf("111\t\tPopescu Ion\t10\n");
	printf("2\t\tIonescu Ana\t9.75\n");
	printf("35\t\tPopa Dan\t8.45");
	return 0;
}
*/

// Ex.3)
/*
int main()
{
	int a = 123;
	printf("a = 123 (10) -> %x (16) hexazicimal\n", a);
	printf("a = 123 (10) -> %o (8) octal", a);
	return 0;
}
*/

// Ex.4)
/*
int main()
{
	int i;
	printf("Introduceti un numar intreg: ");
	scanf("%i", &i);
	printf("Numarul introdus este: %i", i);
	return 0;
}
*/

// Ex.5)
/*
int main()
{
	int i, j;
	printf("Introduceti doua numare intregi: ");
	scanf("%i", &i);
	scanf("%i", &j);
	printf("Numarul introdus este: %i\n", i);
	printf("Numarul introdus este: %i", j);
	return 0;
}
*/

// Ex.6)
/*
int main()
{	
	int a, b;
	printf("Introduceti doua numere intregi: ");
	scanf("%d%d", &a, &b);
	printf("Suma numerelor introduse este: %d\n", a + b);
	printf("Media numerelor introduse este: %d", (a + b) / 2);
	return 0;
}
*/

// Ex.7)
/*
int main()
{
	int l, perimetru, aria;
	printf("Introduceti valoarea laturei patratului: ");
	scanf("%d", &l);
	perimetru = 4 * l;
	aria = l * l;
	printf("Perimetrul patratului de latura %d este %d\n", l, perimetru);
	printf("Aria patratului de latura %d este %d", l, aria);
	return 0;
}
*/

// Ex.8)
/*
int main()
{
	float l, L;
	printf("Calculator de perimetrii si arii la dreptunghi\n");
	printf("L = ");
	scanf("%f", &L);
	printf("l = ");
	scanf("%f", &l);
	printf("Perimetrul dreptunghiului este %.2f\n", L + l);
	printf("Aria dreptunghiului este %.2f", L * l);
	return 0;
}
*/

// Ex.9) Triunghi dreptunghic
/*
int main()
{
	float c1, c2, ip;
	printf("Introduceti dimensiunile triunghiului dreptunghic mai jos.\n");
	printf("Cateta 1 = ");
	scanf("%f", &c1);
	printf("Cateta 2 = ");
	scanf("%f", &c2);
	printf("Ipotenuza = ");
	scanf("%f", &ip);
	printf("Perimetrul triunghiului dreptunghic este: %.2f\n", c1 + c2 + ip);
	printf("Aria triunghiului dreptunghic este: %.2f", (c1 * c2)/2 );

	return 0;
}
*/

//Ex.10)
/*
int main()
{
	int x, result;
	printf("Sa se introduca un numar pentru x in expresia y = |x-4| + |5-x|\n");
	printf("x = ");
	scanf("%d", &x);
	result = (x-4) + (5-x);
	printf("y = %d", result);
	return 0;
}
*/

//Ex.10 - corectata)   "fabs - modul"
/*
int main()
{
	float x, result;

    printf("Introduceti valoarea lui x pentru expresia |x-4|+|5-x|: ");
    scanf("%f", &x);
    result = fabs(x-4) + fabs(5-x);
    if(x < 0)
    {
    	printf("Pentru x = %.0f => |(%.0f) - 4|+|5 - (%.0f)| = %.2f", x, x, x, result);	
    }
    else
    printf("Pentru x = %.0f => |%.0f - 4|+|5 - %.0f| = %.2f", x, x, x, result);
    return 0;	
}
*/

// Varianta profului
/*
int main()
{
    double x, result1, result2, summodulo;

    printf("Introduceti valoare lui x pentru expresia ''|x-4|+|5-x|'':");
    scanf("%lf", &x);
    result1 = fabs(x-4);
    printf("|%.2lf - 4| =  %.2lf\n",x, result1);


    result2 = fabs(5-x);
    printf("|5 - %.2lf| =  %.2lf\n",x,result2);

    summodulo = result1+result2;
    printf("|%.2lf - 4| + |5 - %.2lf| =  %.2lf\n",x, x, summodulo);

    return 0;
}
*/

//Ex.11)
/*
int main()
{
	float x;
	float part[] = {};
	printf("Introduceti o valoare lui x pentru expresia ????: ");
	scanf("%f", &x);
	// x este definit
	part[1] = (8 * x) - 16;
	part[2] = (x * x) + x + 1;
	part[3] = (x * x) - 1;
	part[4] = (x * x) + (3 * x) + 5;
	part[5] = part[1] / part[2];
	part[6] = part[3] / part[4];
	part[7] = part[5] * part[6];
	printf("Pentru x = %.0f rezultatul este: %.6f", part[0], part[7]);
	return 0;
}
*/

// Ex.12)
/*
int main()
{
	const float pi = 3.141;
	float r;
	printf("Introdu o valoare pentru raza (r) cercului: ");
	scanf("%f", &r);
	printf("Lungimea cercului este %.3f\n", 2*pi*r);
	printf("Aria cercului este %.3f\n", pi*r*r);

	return 0;
}
*/

// Ex.13)
/*
int main()
{
	char un_caracter = 'a';
	int un_numar = 2, vector[10] = {5};
	float un_numar_real = 3.14;
	double un_alt_numar_real = 5.654;
	long int x;
	long long y;

	printf("Marimea in octeti pentru 'char' este de %d\n", sizeof(char));
	printf("Marimea in octeti pentru 'int' este de %d\n", sizeof(int));
	printf("Marimea in octeti pentru 'float' este de %d\n", sizeof(float));
	printf("Marimea in octeti pentru 'double' este de %d\n", sizeof(double));
	printf("Marimea in octeti pentru 'long' este de %d\n", sizeof(long));
	printf("Marimea in octeti pentru 'long long' este de %d", sizeof(long long));
	return 0;
}
*/

//Ex.14)
/*
int main()
{
	float nota[3];
	float result;

	time_t now = time(NULL);
	char *time = ctime(&now);

	printf("Intorduceti notele: \n");
	scanf("%f%f%f", &nota[0], &nota[1], &nota[2]);
	printf("CARNET NOTE\nData si ora curenta: %s\nStudent: Beniamin Sferciuc\n", time);
	printf("Nr. Crt.\tDisciplina\tNota examen\n----------------------------------------------\n");
	printf("1.\t\tPCLP\t\t%.1f\n2.\t\tGAC\t\t%.1f\n3.\t\tAM\t\t%.1f\n\n", nota[0], nota[1], nota[2]);
	result = (nota[0] + nota[1] + nota[2])/3;
	printf("Media pentru semestrul I este: %.2f", result);

}
*/

// Exercitiu suplimentar
/*
int main (void)
{
	time_t now = time(NULL);
	char *time = ctime(&now);
	printf("%s\n", time);
	//extrage anul ,nr lunii, ziua saptamanii, ora
	struct tm *zone = gmtime(&now);
	printf("Anul: 20%d\n", zone -> tm_year - 100);
	printf("Numarul lunii: %d\n", zone -> tm_mon + 1);
	printf("Ziua saptamanii: %d\n", zone -> tm_wday);
	printf("Ora: %d", zone -> tm_hour + 2);
	return 0;
}*/


