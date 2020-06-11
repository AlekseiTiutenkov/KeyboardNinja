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
    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
    system("CLS");
    float multiplier = 0;
    multiplier = 60/time_all;
  	if(time_all <= 60 && score > 0){
  	score*=multiplier;
  	if(k==0){
  		score +=25;
  		printf("You typed all the words without errors and completed in 60 seconds, Your score: %.2f", score);
	  }
	  else {
	  	printf("You had a mistake in words, and you met in 60 seconds, Your score: %.2f", score);
	  }
	}
	if(time_all > 60 && score > 0){
		score = 0;
		printf("you typed for more than 60 seconds, Your score: %.2f", score);
	}
  	if(time_all <= 60 && score <= 0){
		score = 0;
		printf("Your score at the end of the workout was negative, Your score: %.2f", score);
	}
	if(time_all > 60 && score < 0){
		score = 0;
		printf("You missed out in 60 seconds and your score was negative, Your score: %.2f", score);
	}
  	Add_New_Record(score,time_all);
}





