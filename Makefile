ccypher: ccypher.o
	gcc -std=c99 -pedantic -o output ccypher.o

ccypher.o: ccypher.c
	gcc -std=c99 -pedantic -c ccypher.c

run: 
	./output $(RUN_ARGS)

clean: 
	rm -f output ccypher.o




