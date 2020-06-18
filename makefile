all: test main

main: bin/main

test: bin/maintest

bin/main: build/src/main.o build/src/Add_New_Record.o build/src/Calling_Sentence.o build/src/Console_color.o build/src/Delete_record.o build/src/Greeting_and_menu.o build/src/Print_Records.o build/src/realize.o
	g++ -Wall -Werror build/src/main.o build/src/Add_New_Record.o build/src/Calling_Sentence.o build/src/Console_color.o build/src/Delete_record.o build/src/Greeting_and_menu.o build/src/Print_Records.o build/src/realize.o -o bin/main

bin/maintest: build/test/maintest.o build/test/Add_New_Record.o build/test/Calling_Sentence.o build/test/Console_color.o build/test/Delete_record.o build/test/Greeting_and_menu_test.o build/test/Print_Records.o build/test/realize_test.o
	g++ build/test/maintest.o build/test/Add_New_Record.o build/test/Calling_Sentence.o build/test/Console_color.o build/test/Delete_record.o build/test/Greeting_and_menu_test.o build/test/Print_Records.o build/test/realize_test.o -o bin/maintest

build/test/maintest.o: test/maintest.cpp
	g++ -I thirdparty -I src -c test/maintest.cpp -o build/test/maintest.o

build/src/main.o: src/main.cpp
	g++ -I includes -Wall -lncurses -ltinfo -Werror -c src/main.cpp -o build/src/main.o

build/test/main.o: src/main.cpp
	g++ -I includes -Wall -lncurses -ltinfo -Werror -c src/main.cpp -o build/test/main.o

build/src/Add_New_Record.o: src/Add_New_Record.cpp
	g++ -Wall -Werror -c src/Add_New_Record.cpp -o build/src/Add_New_Record.o

build/test/Add_New_Record.o: src/Add_New_Record.cpp
	g++ -Wall -Werror -c src/Add_New_Record.cpp -o build/test/Add_New_Record.o

build/src/Calling_Sentence.o: src/Calling_Sentence.cpp
	g++ -Wall -Werror -c src/Calling_Sentence.cpp -o build/src/Calling_Sentence.o

build/test/Calling_Sentence.o: src/Calling_Sentence.cpp
	g++ -Wall -Werror -c src/Calling_Sentence.cpp -o build/test/Calling_Sentence.o

build/src/Console_color.o: src/Console_color.cpp
	g++ -Wall -Werror -c src/Console_color.cpp -o build/src/Console_color.o

build/test/Console_color.o: src/Console_color.cpp
	g++ -Wall -Werror -c src/Console_color.cpp -o build/test/Console_color.o

build/src/Delete_record.o: src/Delete_record.cpp
	g++ -Wall -Werror -c src/Delete_record.cpp -o build/src/Delete_record.o

build/test/Delete_record.o: src/Delete_record.cpp
	g++ -Wall -Werror -c src/Delete_record.cpp -o build/test/Delete_record.o

build/src/Greeting_and_menu.o: src/Greeting_and_menu.cpp
	g++ -Wall -Werror -c src/Greeting_and_menu.cpp -o build/src/Greeting_and_menu.o

build/test/Greeting_and_menu_test.o: src/Greeting_and_menu_test.cpp
	g++ -Wall -Werror -c src/Greeting_and_menu_test.cpp -o build/test/Greeting_and_menu_test.o

build/src/Print_Records.o: src/Print_Records.cpp
	g++ -Wall -Werror -c src/Print_Records.cpp -o build/src/Print_Records.o

build/test/Print_Records.o: src/Print_Records.cpp
	g++ -Wall -Werror -c src/Print_Records.cpp -o build/test/Print_Records.o

build/src/realize.o: src/realize.cpp
	g++ -Wall -Werror -c src/realize.cpp -o build/src/realize.o

build/test/realize_test.o: src/realize_test.cpp
	g++ -Wall -Werror -c src/realize_test.cpp -o build/test/realize_test.o

.PHONY: clean
clean:
	rm -rf build/*.o