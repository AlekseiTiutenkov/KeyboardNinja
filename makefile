EXE = bin/KeyboardNinja

DIR_SRC = build/src

FLAGS = -Wall -Werror --std=c++11

OBJ = g++ $(FLAGS) -c $^ -o $@

all: $(EXE) 

.PHONY: clean all

$(EXE): $(DIR_SRC)/main.o $(DIR_SRC)/Add_New_Record.o $(DIR_SRC)/Calling_Sentence.o $(DIR_SRC)/Console_color.o $(DIR_SRC)/Delete_record.o $(DIR_SRC)/Greeting_and_menu.o $(DIR_SRC)/Print_Records.o $(DIR_SRC)/realize.o 
	g++ $(FLAGS) $^ -o $@

$(DIR_SRC)/main.o: src/main.cpp
	$(OBJ)
$(DIR_SRC)/Add_New_Record.o: src/Add_New_Record.cpp
	$(OBJ)
$(DIR_SRC)/Calling_Sentence.o: src/Calling_Sentence.cpp
	$(OBJ)
$(DIR_SRC)/Console_color.o: src/Console_color.cpp
	$(OBJ)
$(DIR_SRC)/Delete_record.o: src/Delete_record.cpp
	$(OBJ)
$(DIR_SRC)/Greeting_and_menu.o: src/Greeting_and_menu.cpp
	$(OBJ)
$(DIR_SRC)/Print_Records.o: src/Print_Records.cpp
	$(OBJ)
$(DIR_SRC)/realize.o: src/realize.cpp
	$(OBJ)

clean:
	rm -rf $(DIR_SRC)/*.o
	rm bin/*.exe