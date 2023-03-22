#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// //
// int main(void)
// {
//     char key[] = "apple";
//     char buffer[80];

//     do
//     {
//         printf("\n\t\tGuess mu favorit fruit?");
//         printf("\n\t\tIncercati: ");
//         fflush(stdout);
//         scanf("%s", buffer);
//         system("cls");
//     } while (strcmp(key, buffer) != 0);
//     puts("\nCorrect answer!\n");
    
    

//     return 0;
// }

//
// int main ()
// {
//   char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//   int n;
//   puts ("Looking for R2 astromech droids...");
//   for (n=0 ; n<3 ; n++)
//     if (strncmp (str[n],"R2xx", 2) == 0)
//     {
//       printf ("found %s\n",str[n]);
//     }
//   return 0;
// }

// Sortarea prin insertie
// int main()
// {
//     int arr[10] = {5, 2, 4, 6, 1, 3, 32, 100, 54, 23};
//     int i, j;

//     for (int i = 1; i < 10; i++)
//     {
//         int key = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
    
//     for (size_t i = 0; i < 10; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// #pragma pack(1) - necesita memorie mai putina, dar performanta este scazuta

