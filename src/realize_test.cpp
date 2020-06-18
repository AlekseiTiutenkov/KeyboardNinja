#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "Add_New_Record.hpp"

float realize (char Sentence[])
{	
	int len = 0;
	char delim[] = " \t\n,.-";
	char string[100];
	int k = 0, words = 0;
	float score = 0;
	char Copy_Sentence[1000];
	
	strcpy(Copy_Sentence, Sentence);
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD) ((10 << 0) | 0));
	
	
	SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));

    char *p = strtok(Sentence, delim);

    while (p != NULL) {
    	

    	SetConsoleTextAttribute(hConsole, (WORD) ((2 << 0) | 1));
    	
    	
    	strcpy(string, p);
    	
		if(strcmp(string, p) == 0){
			len = strlen(string);
			score+=len;
			++words;
			
		} else {
			len = strlen(p);
			score-=len;
			--k;
		}
        system("CLS");
        SetConsoleTextAttribute(hConsole, (WORD) ((10 << 0) | 0));
       	SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
		if(strcmp(string, p)==0){
			SetConsoleTextAttribute(hConsole, (WORD) ((2 << 4) | 7));
			
		} else {
			SetConsoleTextAttribute(hConsole, (WORD) ((2 << 5) | 7));
		}
		p = strtok (NULL, delim);
    }
    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
    system("CLS");
    
    return score;
    
    
}

