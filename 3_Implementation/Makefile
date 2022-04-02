#Targetname : Dependencies
#<TAB>Command

target : main.c test_tarrif_calc.c bill.h tarrif_calc.h
	gcc test_tarrif_calc.c Unity/unity.c -IUnity

Run : target 
	./a.out   
    
clean :
	rm a.out