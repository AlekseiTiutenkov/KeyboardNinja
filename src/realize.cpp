#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void realize (char Sentence[])
{
	clock_t a1,a2;
	float time_all=0, time=0;
    char delim[] = " \t\n,.-";
    char string[100];
    int len = 0;
    char Copy_Sentence[100];
   	int k = 0, words = 0;
	float score = 0;

    strcpy(Copy_Sentence, Sentence);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD) ((10 << 0) | 0));
    printf("%s \n", Sentence);
    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));

    char *p = strtok(Sentence, delim);
	printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Your score: %6.2f \t   | \tInput time(last word): %6.2f\t |  \tInput time(All words) %6.2f  |\n", score, time, time_all);
    printf("-------------------------------------------------------------------------------------------------------\n");

    while (p != NULL) {
      	printf("                                                 ");
		printf("%s",p);
		printf("                                                 \n");
    	SetConsoleTextAttribute(hConsole, (WORD) ((2 << 0) | 1));
    	
    	a1=clock();
    	scanf("%s", string);
    	a2=clock();
    	
    	time_all+=(float)(a2-a1)/CLOCKS_PER_SEC;
    	time = (float)(a2-a1)/CLOCKS_PER_SEC;
    	
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
       	printf("%s \n", Copy_Sentence);
       	SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
       	printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("Your score: %6.2f \t   | \tInput time(last word): %6.2f\t |  \tInput time(All words) %6.2f  |\n", score, time, time_all);
        printf("-------------------------------------------------------------------------------------------------------\n");
		if(strcmp(string, p)==0){
			SetConsoleTextAttribute(hConsole, (WORD) ((2 << 4) | 7));
			
		} else {
			SetConsoleTextAttribute(hConsole, (WORD) ((2 << 5) | 7));
		}
		p = strtok (NULL, delim);
    }
    printf("%f", score);
}
int main()
{
    char Sentence[100] = "Ball start stop";
    realize(Sentence);
    return 0;
}




