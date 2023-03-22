#include <stdio.h>

// Fluxuri (interactionare cu dispozitivele fizice)
// Fluxuri (stream) standard: stdin, stdout, stderr

// Functii:

// Operatii pe fisiere:
1) remove() - eliminati fisierul 
    int remove (const char * filename);
    Returneaza 0 pentru succes si !0 pentru esec
2) rename() - redenumiti fisierul sau/si mutati
    int rename (const char * oldname, const char * newname);
    Returneaza 0 pentru succes si !0 pentru esec
3) tmpfile() - deschideti un fisier temporar
    FILE * tmpfile (void);
    Returneaza un indicator de flux la succes si NULL la esec
    Fisierul creat va fi sters automat
4) tmpnam() - generati nume de fisier temporar 
    char * tmpnam (char * str);
    Returneaza un pointer catre sirul care contine numele propus pentru fisierul temporar la succes si un pointer nul la esec
    Fisierul creat nu va fi sters automat


// Acces fisier:
1) fclose() - inchideti fisierul
    int fclose(FILE * stream);
    Returneaza valoarea zero la succes si EOF (inseamna: -1) la esec
2) fflush() - flush de flux
    int fflush(FILE * stream);
    Returneaza 0 la succes si EOF la esec
3) fopen() - dechideti fisierul
    FILE * fopen(const char * filename, const char * mode);
    Returneaza un pointer catre un FILE la succes si un pointer nul la esec
4) freopen() - redeschideti fluxul cu alt fisier sau mod
    FILE * freopen(const char * filename, const char * mode, FILE * stream);
    Returnează pointerul transmis ca parametru flux la succes si un pointer nul la esec
5) setbuf() - setati buffer-ul de flux
    void setbuf(FILE * stream, char * buffer);
    Nu returneaza nimic
6) setvbuf() - modificati buffer-ul fluxului
    int setvbuf(FILE * stream, char * buffer, int mode, size_t size);
    Returneaza 0 la succes si !0 la esec

// Formatted input/output:
1) fprintf() - scrieti date in flux
    int fprintf(FILE * stream, const char * format, ...);
    Un specificator de format urmează acest prototip: %[flags][width][.precision][length]specifier
    Returneaza numarul total de caractere scrise la succes si un numar negativ la esec 
2) fscanf() - cititi datele in flux
    int fscanf(FILE * stream, const char * format, ...);
    Returneaza numarul de elemente din lista de argumente la succes si EOF la esec
3) printf() - imprimati datele in stdout
    int printf(const char * format, ...);
    Returneaza numarul total de caractere scrise la succes si un numar negativ la esec
4) scanf() - cititi datele din stdin
    int scanf(const char * format, ...);
    Returneaza nr. de elem. din lista de argumente la succes si EOF la esec
5) snprintf() - scrieti iesirea formatata intr-un buffer dimensionat
    int snprintf(char * s, size_t n, const char * format, ...);
    Returneaza nr. de caractere scrise la succes si un nr. negativ la esec
6) sprintf() - scrieti datele in sir
    Compune un șir cu același text care ar fi tipărit dacă formatul ar fi folosit pe printf, dar în loc să fie tipărit, conținutul este stocat ca șir C în buffer-ul indicat de str
    int sprintf ( char * str, const char * format, ... );
    Returneaza numarul total de caractere la succes, si un nr negativ la esec
7) sscanf() - cititi datele din sir
    Citește datele din s și le stochează conform formatului parametrului în locațiile date de argumentele suplimentare
    int sscanf ( const char * s, const char * format, ...);
    Returneaza nr de elemente din lista de argumente la succes, si EOF la esec
8) vfprintf() - scrieti date din lista de argumente variabile in flux 
    Scrie șirul C indicat de format către fluxul , înlocuind orice specificator de format în același mod ca printf , dar folosind elementele din lista de argumente variabile identificate prin arg în loc de argumente suplimentare ale funcției.
    int vfprintf ( FILE * stream, const char * format, va_list arg );
    La succes, se returnează numărul total de caractere scrise. La esec, este returnat un nr negativ
9) vfscanf() - cititi date din flux in lista de argumente variabile
    Citește datele din flux și le stochează conform formatului parametrului în locațiile indicate de elementele din lista de argumente variabile identificate de arg .
    int vfscanf ( FILE * stream, const char * format, va_list arg );
    La succes, funcția returnează numărul de elemente din lista de argumente completate cu succes. La esec este returnat EOF
10) vprintf() - tipariti datele din lista de argumente variabile in stdout
    Scrie șirul C indicat de format la ieșirea standard ( stdout ), înlocuind orice specificator de format în același mod ca printf , dar folosind elementele din lista de argumente variabile identificate prin arg în loc de argumente suplimentare ale funcției.
    int vprintf ( const char * format, va_list arg );
    La succes, se returnează numărul total de caractere scrise. La esec, este returnat un numar negativ
11) vscanf() - cititi datele in lista de argumente variabile
    Citește datele din intrarea standard ( stdin ) și le stochează conform formatului parametrului în locațiile indicate de elementele din lista de argumente variabile identificate de arg .
    int vscanf ( const char * format, va_list arg );
    La succes, funcția returnează numărul de elemente din lista de argumente completate cu succes. La esec, returneaza EOF
12) vsnprintf() - scrieti date din lista de argumente variabile in buffer de dimensiuni
    int vsnprintf (char * s, size_t n, const char * format, va_list arg );
    Returneaza numărul de caractere care ar fi fost scrise dacă n ar fi fost suficient de mare, fără a lua în considerare caracterul nul final, dacă apare o eroare de codificare, este returnat un număr negativ.
13) vsprintf() - scrieti date din lista de argumente variabile in sir
    int vsprintf (char * s, const char * format, va_list arg );
    La succes, se returnează numărul total de caractere scrise. La eșec, este returnat un număr negativ.
14) vsscanf() - cititi datele din sir in lista de argumente variabile
    int vsscanf ( const char * s, const char * format, va_list arg );

// Intrare/iesire caractere:
1) fgetc() - obtineti caracter din flux
    int fgetc ( FILE * stream );
    La succes, caracterul citit este returnat (promovat la o valoare int ). La eroare, returneaza EOF
2) fgets() - obtineti sir din flux
    char * fgets ( char * str, int num, FILE * stream );
    La succes, funcția returnează str. La esec, returneaza un pointer nul.
3) fputc() - scrieti caracterul in flux
    Scrie un caracter în flux și avansează indicatorul de poziție.
    int fputc ( int character, FILE * stream );
    La succes, personajul scris este returnat. Dacă apare o eroare de scriere, EOF este returnat
4) fputs() - scrieti sirul in flux
    int fputs ( const char * str, FILE * stream );
    La succes, este returnata o valoare nenegativa. In caz de eroare, funcția returnează EOF
5) getc() - obtineti caracter din flux
    int getc ( FILE * stream );
    La succes, caracterul citit este returnat. La esec, este returnat EOF
6) getchar() - obtineti caracterul din stdin
    int getchar ( void );
7) gets() - obtineti sir de la stdin
    char * gets ( char * str );
8) putc() - scrieti caracterul in flux
    int putc ( int character, FILE * stream );
9) putchar() - scrieti caracterul in stdout
    int putchar ( int character );
10) puts() - scrieti sirul in stdout
    int puts ( const char * str );
11) ungetc() - anulati caracterul din flux
    int ungetc ( int character, FILE * stream );

// Intrare/iesire directa:
1) fread() - cititi blocul de date din flux
    Citește o matrice de elemente de numărare , fiecare cu o dimensiune de octeți de dimensiune , din flux și le stochează în blocul de memorie specificat de ptr .
    size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
2) fwrite() - scrieti blocul de date din flux
    Scrie o matrice de elemente de numărare , fiecare cu o dimensiune de octeți de dimensiune , din blocul de memorie indicat de ptr către poziția curentă în flux .
    size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );

// Pozitionarea fisierului: 
1) fgetpos() - obtineti pozitia actuala in flux
    int fgetpos ( FILE * stream, fpos_t * pos );
    La succes, funcția returnează zero.
    În caz de eroare, errno este setată la o valoare pozitivă specifică platformei, iar funcția returnează o valoare diferită de zero.
2) fseek() - repozitionati indicatorul de pozitie a fluxului
    int fseek ( FILE * stream, long int offset, int origin );
    Dacă are succes, funcția returnează zero. În caz contrar, returnează o valoare diferită de zero.
3) fsetpos() - setati indicatorul de pozitie al fluxului
    int fsetpos ( FILE * stream, const fpos_t * pos );
    Dacă are succes, funcția returnează zero.
    La eșec, este returnată o valoare diferită de zero și errno este setată la o valoare pozitivă specifică sistemului.
4) ftell() - obtineti pozitia actuala in flux
    long int ftell ( FILE * stream );
    La succes, valoarea curentă a indicatorului de poziție este returnată.
    La eșec, -1L este returnat și errno este setat la o valoare pozitivă specifică sistemului.
5) rewind() - setati pozitia fluxului la inceput
    void rewind ( FILE * stream );

// Tratarea erorilor:
1) clearerr() - stergeti indicatorii de eroare
    void clearerr ( FILE * stream );
2) feof() - verificati indicatorul de sfarsit de fisier
    int feof ( FILE * stream );
    O valoare diferită de zero este returnată în cazul în care indicatorul de sfârșit de fișier asociat fluxului este setat. În caz contrar, se returnează zero.
3) ferror() - verificati indicatorul de eroare
    int ferror ( FILE * stream );
    O valoare diferită de zero este returnată în cazul în care este setat indicatorul de eroare asociat fluxului. În caz contrar, se returnează zero.
4) perror() - imprimati mesaj de eroare
    void perror ( const char * str );

// Macro-uri:
1) BUFSIZ - dimensiunea buffer-ului
2) EOF - sfarsitul fisierului
3) FILENAME_MAX - lungimea maxima a numelor fisierelor
4) FOPEN_MAX - limita potentiala a fluxurilor deschise simultane
5) L_tmpnam - lungimea minima pentru numele fisierului temporar
6) NULL - pointer nul
7) TMP_MAX - numar de fisiere temporare
// Aditionale: _IOFBF, _IOLBF, _IONBF (se folosesc cu setvbuf)
// SEEK_CUR, SEEL_END, SEEK_START (se folosesc cu fseek)

//Types:
1) FILE - obiect care contine inf. pentru a controla un flux
2) fpos_t - obiect care contine inf. pentru a specifica o pozitie intr-un fisier 
3) size_t - tip integral nesemnat

