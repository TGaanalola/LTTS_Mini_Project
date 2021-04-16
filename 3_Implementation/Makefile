PROJECT_NAME = Bank
TEST_PROJECT_NAME = Test_$(PROJECT_NAME)

SRC =src/addacc.c \
src/display.c \
src/searchacc.c \
src/deposit.c \
src/withdraw.c \
src/checkpasswd.c \ 
Bank.c\


Bank_SRC = test.c

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJECT_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJECT_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJECT_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJECT_NAME).$(EXEC))
	gcov -a $(Bank_SRC)
	$(RM) *.$(EXEC)
	
	
	$(RM) test.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXEC)
	gdb $(PROJECT_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJECT_NAME).$(EXEC)

clean:
	
	$(RM) *.$(EXEC)
