void Console_color(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD) (( 0 << 4) | 9));
}
