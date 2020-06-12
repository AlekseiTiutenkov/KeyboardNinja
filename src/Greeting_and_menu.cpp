#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

int Greeting_and_menu(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char num;
    while(1){
        printf("---------------------------------------------------------------<");
        printf("\n<<<<<<Welcome to the Keyboard Simulator game V1.0.>>>>>>|\n");
        printf("---------------------------------------------------------------<\n");
        printf("\n-----------------------------------------------------");
        SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 4));
        printf("\nEnter 0 for game rules.");
        SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
		printf("\nEnter 1 to start.\nEnter 2 to display score.\nEnter 3 to delete record\nEnter 4 to exit.\n");
		printf("\n-----------------------------------------------------\n");
        scanf("%s", &num);
        num -= 48;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        switch(num){
            case 0:
                system("CLS");
                printf("\t\t\t\t<<<<<<RULES OF THE GAME>>>>>>");
                printf("\n\n\n1)Enter words as quickly as possible.\n2)For correctly typed words you get points.");
                printf("\n3)For misspelled words you are taken away points.\n4)For misspelled words you are taken away points.");
                printf("\n5)For all correctly written words, you get +25 points.\n6)If you met the deadline and your score was greater than 0, then your score is increased by a certain factor.");
                printf("\n7)Throughout the workout you can observe your score, the time of the last word typed and the total time of the set of words.");
                printf("\n8)At the end of the game you can see your training result and score.\n9)You can delete any of the records by selecting the corresponding menu item..");
                SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 4));
                printf("\n\n\n-----------------------------------\n");
                printf("If you want to exit, press any key|");
                printf("\n-----------------------------------\n");
                if(getch()){
                    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
                    system("CLS");
                    break;
                }
            case 1:
                system("CLS");
                Calling_Sentence();
                break;
            case 2:
                system("CLS");
                printf("     <<<RECORDS>>>\n");
                Print_Records();
                SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 4));
                printf("\n\n\n-----------------------------------\n");
                printf("If you want to exit, press any key|");
                printf("\n-----------------------------------\n");
                if(getch()){
                    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
                    fclose(file);
                    system("CLS");
                    break;
                }
            case 3:
                Delete_record();
                break;
            case 4:
                system("CLS");
                printf("\n\n\n\n\n\n\n\t\t\tGood luck and see you soon\n\n\n\n\n");
                Sleep(3000);
                SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 7));
                return 0;
			default: 
                printf("Enter the correct value");
                Sleep(2000);
                system("CLS");
                break;    
		}
	}
}

