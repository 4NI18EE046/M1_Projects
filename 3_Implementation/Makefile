#Targetname : Dependencies
#<TAB>Command

INC= inc/bill.h
SRC= src
TEST=test/test_tarrif_calc.c
target : $(SRC) $(INC) $(TEST)
	gcc $(TEST) -I$(SRC) unity/unity.c -Iunity



Run : target 
	./a.out   
    
clean :
	rm a.out
