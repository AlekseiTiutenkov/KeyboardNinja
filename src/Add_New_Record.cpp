#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

struct Player{
	float data;
	char name[20];
	float time_man;
}Player1; 

FILE *file, *update_file;

int Add_New_Record(float score, float time_all) {
	char string[20] = {'\0'};
	
	printf("\nEnter your name: ");
	scanf("%s", string);
	file = fopen("Records.txt", "a+");
	if (file == NULL) {
        printf("Error opening file");
        getch();
        return 1;
    }
	Player1.data = score;
	Player1.time_man = time_all;
	strcpy(Player1.name, string);
    fwrite(&Player1, sizeof(Player1) , 1 , file);
    fclose(file);
	return 0;
}

