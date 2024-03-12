main: main.o
	g++ $^ -o $@

%.o: %.c
	g++ -c $^ -o $@
