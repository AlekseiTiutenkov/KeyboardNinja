all: main

main: bin/main

bin/main: build/main.o build/Add_New_Record.o build/Calling_Sentence.o build/Console_color.o build/Delete_record.o build/Greeting_and_menu.o build/Print_Records.o build/realize.o
	gcc -Wall -Werror build/main.o build/Add_New_Record.o build/Calling_Sentence.o build/Console_color.o build/Delete_record.o build/Greeting_and_menu.o build/Print_Records.o build/realize.o -o bin/main

build/main.o: src/main.cpp
	gcc -I includes -Wall -lncurses -ltinfo -Werror -c src/main.cpp -o build/main.o

build/Add_New_Record.o: src/Add_New_Record.cpp
	gcc -Wall -Werror -c src/Add_New_Record.cpp -o build/Add_New_Record.o

build/Calling_Sentence.o: src/Calling_Sentence.cpp
	gcc -Wall -Werror -c src/Calling_Sentence.cpp -o build/Calling_Sentence.o

build/Console_color.o: src/Console_color.cpp
	gcc -Wall -Werror -c src/Console_color.cpp -o build/Console_color.o

build/Delete_record.o: src/Delete_record.cpp
	gcc -Wall -Werror -c src/Delete_record.cpp -o build/Delete_record.o

build/Greeting_and_menu.o: src/Greeting_and_menu.cpp
	gcc -Wall -Werror -c src/Greeting_and_menu.cpp -o build/Greeting_and_menu.o

build/Print_Records.o: src/Print_Records.cpp
	gcc -Wall -Werror -c src/Print_Records.cpp -o build/Print_Records.o

build/realize.o: src/realize.cpp
	gcc -Wall -Werror -c src/realize.cpp -o build/realize.o

.PHONY: clean

clean:
	rm -rf build/*.o