#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void realize (char Sentence[])
{
    char delim[] = " \t\n,.-";
    char string[100];
    char ASentence[100];

    strcpy(ASentence, Sentence);
    printf("%s \n", Sentence);
    char* p = strtok(Sentence, delim);

    while (p != NULL) {
        printf("%s\n", p);
        scanf("%s", string);
        p = strtok(NULL, delim);
        system("CLS");
        printf("%s \n", ASentence);
    }
    system("CLS");
}



