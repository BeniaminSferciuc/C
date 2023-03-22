#include <stdio.h>
#include <string.h>

// Functii:

// Copierea:
1) memcpy() - copiere bloc de memorie
!   Copiază valorile de num octeți din locația indicată de sursă în blocul de memorie indicat de destinație.
    void * memcpy (void * destination, const void * source, size_t num);
    Exemplu: memoria din class este copiata in class_copy si primeste toate date din fiecare variabila din struct
        struct {
            char name[50];
            int age;
        } class, class_copy;

        int main(void) {
            char myname[] = "Beniamin Sferiuc";
            memcpy(class.name, myname, strlen(myname) + 1);
            class.age = 45;

            memcpy(&class_copy, &class, sizeof(class));
            fprintf(stdout, "class_copy: %s, %d\n", class_copy.name, class_copy.age);
            
            return 0;
        }
2) memmove() - mutati blocul de memorie
!   Copiază valorile de num octeți din locația indicată de sursă în blocul de memorie indicat de destinație.
    void * memmove ( void * destination, const void * source, size_t num );
3) strcpy() - copiati sirul
!   Copiază șirul C indicat de sursă în matricea indicată de destinație , inclusiv caracterul nul final.
    char * strcpy ( char * destination, const char * source );
4) strncpy() - copiati caractere din sir
!   Copiază primele num de caractere ale sursei în destinație.
    char * strncpy ( char * destination, const char * source, size_t num );

// Concatenare:
1) strcat() - concateneaza siruri
!   Adaugă o copie a șirului sursă la șirul destinație.
    char * strcat ( char * destination, const char * source );
2) strncat() - adaugati caractere din sir
!   Adaugă primele num de caractere ale sursei la destinație , plus un caracter nul final.
    char * strncat ( char * destination, const char * source, size_t num );

// Comparatie
1) memcmp() - comparati doua blocuri de memorie
!   Compară primii num de octeți ai blocului de memorie indicat de ptr1 cu primii num de octeți indicați de ptr2
    int memcmp ( const void * ptr1, const void * ptr2, size_t num );
    Returneaza 0 daca ambele blocuri sunt egale, <0 daca ptr1 < ptr2 si >0 daca ptr1 > pt2
2) strcmp() - comparati doua siruri
!   Compară șirul C str1 cu șirul C str2.
    int strcmp ( const char * str1, const char * str2 );
    Returneaza 0 daca ambele blocuri sunt egale, <0 daca ptr1 < ptr2 si >0 daca ptr1 > pt2
3) strcoll() - comparati doua siruri folosind locale
!   Compară șirul C str1 cu șirul C str2 , ambele interpretate corespunzător în funcție de categoria LC_COLLATE a localității C selectate în prezent
    int strcoll ( const char * str1, const char * str2 );
    Returneaza 0 daca ambele blocuri sunt egale, <0 daca ptr1 < ptr2 si >0 daca ptr1 > pt2
4) strncmp() - comparati caracterele a doua siruri
!   Compară până la un număr de caractere ale șirului C str1 cu cele ale șirului C str2
    int strncmp ( const char * str1, const char * str2, size_t num );
    Returneaza 0 daca ambele blocuri sunt egale, <0 daca ptr1 < ptr2 si >0 daca ptr1 > pt2
5) strxfrm() - trasformati sirul folosind locale
!   Transformă șirul C indicat de sursă în funcție de localitatea curentă și copiază primele num de caractere ale șirului transformat la destinație , returnând lungimea acestuia.
    size_t strxfrm ( char * destination, const char * source, size_t num );
    Returneaza lungimea șirului transformat, fără a include caracterul nul final.

// Cautare:
1) memchr() - localizati caracterul in blocul de memorie
2) strchr() - localizati prima aparitie a caracterului in sir
3) strcspn() - obtineti span pana la caracterul din sir
4) strpbrk() - localizati caractere in sir
5) strrchr() - localizati ultima apritie a caracterului in sir
6) strspn() - obtineti intervalul setului de caractere in sir
7) strstr() - gasiti subsir
8) strtok() - inpartiti sirul in jetoane

// Altele
1) memset() - umpleti blocul de memorie
2) strerror() - obtineti indicatorul catre sirul de mesaje de eroare
3) strlen() - obtineti lungimea sirului

// Macro
1) NULL - pointerul nul

// Types
1) size_t - tip integral nesemnat