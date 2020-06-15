#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "main.hpp"

extern Player Player1;
extern Lvl Levels;
extern FILE *file, *update_file;

void Delete_record(){
	char update_name[20];
	system("CLS");
	update_file = fopen("new.txt" ,"wb");
  	file = fopen("Records.txt" ,"rb");
	while (fread(&Player1,sizeof(Player1),1,file))
     {
    	fwrite(&Player1, sizeof(Player1),1, update_file);
      }
    fclose(update_file);
    fclose(file);
    file=fopen("Records.txt" ,"wb");
    update_file=fopen("new.txt" ,"rb");
    puts("Enter name: ");
    scanf("%s", update_name);
    while (fread(&Player1,sizeof(Player1),1,update_file)){
    	if(strcmp(Player1.name,update_name)!=0)
    		fwrite(&Player1, sizeof(Player1),1, file);
	}		
	fclose(file);
	fclose(update_file);
}
