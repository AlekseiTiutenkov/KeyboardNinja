#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "Realize.hpp"
#include "main.hpp"

extern Player Player1;
extern Lvl Levels;
extern FILE *file, *update_file;

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
					 realize(Levels.Easy_Level);
					 break;
				case 2:
					 system("CLS");	
					 strcpy(Levels.Medium_Level, "They walked along a lane out of the village until they reached a gently winding path that \nled to the river. After crossing a wooden bridge, they  trees kept off their heads.");
					 realize(Levels.Medium_Level);								
					 break;
           	 	
				case 3:
					 system("CLS");	
					 strcpy(Levels.Hard_Level, "It wasnt long before a group of US soldiers on motorcycles stopped.\nThey were on their way to a wine festival on the Moselle River and were thrilled to have \nfemale companionship. Over the next eight months, we covered a lot of ground.");
					 realize(Levels.Hard_Level);										
					 break;
					 
				case 4: 
					 transition = false;
					 system("CLS");	
					 break;
				default: 
					printf("Enter the correct value");
					Sleep(2000);
					system("CLS");
					break;
			
			}		
	}
	
}

