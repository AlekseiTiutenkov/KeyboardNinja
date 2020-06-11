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
    int len = 0;
    char ASentence[100];
   	int k = 0, words = 0;
	float score = 0;

    strcpy(ASentence, Sentence);
    printf("%s \n", Sentence);
    char* p = strtok(Sentence, delim);

    while (p != NULL) {
        printf("%s\n", p);
        
        scanf("%s", string);
        
        if(strcmp(string, p) == 0){
			len = strlen(string);
			score+=len;
			++words;
			
		} else {
			len = strlen(p);
			score-=len;
			--k;
		}
		
        p = strtok(NULL, delim);
        system("CLS");
        printf("%s \n", ASentence);
    }
    printf("%f", score);
}




