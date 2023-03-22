#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdalign.h>
#include <stdbool.h>
#include <ctype.h>

/*
typedef struct class
{
  int age;
  char *name;
  int x;
  int y;
} sh;

int function(int x, int y)
{
  return x * 2 + y;
}

int main ()
{
  sh myclass;
  myclass.age = 21;
  myclass.name = "Beniamin Sferiuc";

  printf("%d\n%s\n", myclass.age, myclass.name);

  sh test;
  test.x = 3;
  test.y = 4;

  printf("%f\n", test.x/test.y); // 0.000000
  printf("%f\n", (double)test.x/test.y); // 0.750000
  printf("%g\n", (double)test.x/test.y); // 0.75

  int (*fn)(int, int) = &function;
  int x = 42, y = 123;

  printf("(*fp)(%i, %i) = %i\n", x, y, (*fn)(x, y));
  printf("fn(%i, %i) = %i\n", x, y, fn(x, y));

  int a = 1, b = 1, tmp = 0;
  tmp = ++a;
  printf("a = %d, tmp = %d\n", a, tmp); // a = 2, tmp = 2
  tmp = a++;
  printf("a = %d, tmp = %d\n", a, tmp);
  tmp = --b;
  printf("b = %d, tmp = %d\n", b, tmp);
  tmp = b--;
  printf("b = %d, tmp = %d\n", b, tmp);

  int arr[5] = {1, 2, 3, 4, 5};
  int *parr = &arr[0];

  for (size_t i = 0; i < 5; i++)
  {
    printf("\n\t%d", *parr++);
  }

  printf("\n\n");

  int *p = &arr[2];
  int *q = &arr[3];
  size_t diff = q - p;

  printf("*p = %d\n", *p);
  printf("&p = %d\n", &p);
  printf("*q = %d\n", *q);
  printf("&q = %d\n", &q);

  return 0;
}
*/
/*
int main(void)
{
  int toknum = 0;
  char str[] = "Hello,, world! I am Benjamin!";
  const char delimiters[] = ", !";
  char *token = strtok(str, delimiters);
  while(token != NULL)
  {
    printf("%d: [%s]\n", ++toknum, token);
    token = strtok(NULL, delimiters);
  }
  printf("Word: %d", toknum);

  return 0;
}
*/

// #define __STDC_WANT_LIB_EXT1__ 1
// #ifndef __STDC_LIB_EXT1__
// #endif

// int main(void)
// {
//   char src[] = "1.2, 3.5, 4.2";
//   char *next = NULL;
//   char *first = strtok_s(src, ",", &next);

//   do
//   {
//     char *part;
//     char * posn;

//     printf("[%s]\n", first);
//     part = strtok_s(first, ",", &posn);
//     while(part != NULL)
//     {
//       printf("[%s]\n", part);
//       part = strtok_s(NULL, ",", &posn);
//     }
//   } while (first == strtok_s(NULL, ",", &next) != NULL);

//   return 0;
// }

// Nr. de caractere din fisier
// int main(void)
// {
//   FILE * pFile;
//   long size;

//   pFile = fopen ("myfile.txt","rb");
//   if (pFile==NULL) perror ("Error opening file");
//   else
//   {
//     fseek (pFile, 0, SEEK_END);   // non-portable
//     size=ftell (pFile);
//     fclose (pFile);
//     printf ("Size of myfile.txt: %ld bytes.\n",size);
//   }
//   return 0;
// }


