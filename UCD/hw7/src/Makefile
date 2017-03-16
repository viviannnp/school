brians_brain_cellular_automata: brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o
	gcc -Wall brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o -o auto
	clang -g brians_brain_cellular_automata.c brians_brain.c cell.c cell_grid.c list.c -o debug
	make clean

%.o: %.c
	gcc -Wall -c $<


clean:
	rm *.o
