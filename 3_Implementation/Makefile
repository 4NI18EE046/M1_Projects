#Targetname : Dependencies
#<TAB>Command

INC= inc/bill.h
SRC= src
TEST=test/test_tarrif_calc.c
target : $(SRC) $(INC) $(TEST)
	gcc $(TEST) -I$(SRC) ../Unity/unity.c -I../Unity



Run : target 
	./a.out   
    
clean :
	rm a.out
