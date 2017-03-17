brians_brain_cellular_automata: brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o
	gcc -Wall brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o
	make clean
cell.o: cell.c
	gcc -Wall cell.c
list.o: list.c
	gcc -Wall list.c
cell_grid.o: cell_grid.c
	gcc -Wall cell_grid.c 
brians_brain.o: brians_brain.c
	gcc -Wall brians_brain.c

%.o: %.c
	gcc -Wall -c $<

clean:
	rm *.o
