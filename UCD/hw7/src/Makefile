all: cell_tester cell_grid_tester list_tester brians_brain_cellular_automata_tester

brians_brain_cellular_automata: brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o
	gcc -Wall brians_brain_cellular_automata.o brians_brain.o cell.o cell_grid.o list.o
	gcc _Wall list_tester.o list.o
	gcc -Wall cell_grid_tester.o cell_grid.o
	gcc -Wall cell_tester.o cell.o
	make clean

%.o: %.c
	gcc -Wall -c $<

clean:
	rm *.o
