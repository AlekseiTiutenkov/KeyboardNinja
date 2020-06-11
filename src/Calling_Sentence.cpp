#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
struct Lvl{
	public:
		char Easy_Level[1000];
		char Medium_Level[1000];
		char Hard_Level[1000];
		
}Levels;

void Calling_Sentence(){
	char num;
	bool transition = true;
	while(transition){
	printf("Choose difficulty level");
	printf("\n-----------------------------------------------------");
	printf("\nEnter 1 to choose easy level.\nEnter 2 to choose medium level.\nEnter 3 to choose hard level.\nEnter 4 to exit.\n");
	printf("-----------------------------------------------------\n");
	scanf("%s", &num);
	num -=48;
	switch(num){
				case 1:
					 system("CLS");	
					 strcpy(Levels.Easy_Level, "Apart from the cost, shared flats and houses are often in poor condition.\nLandlords are slow to spend their profits on repairs.\n");									
					 break;
				default: 
					printf("Enter the correct value");
					Sleep(2000);
					system("CLS");
					break;
			
			}		
	}
	
}

