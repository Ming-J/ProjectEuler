main: proj6.o
	g++ -o main proj6.o

proj6.o: proj6.cpp
	g++ -c proj6.cpp

clean:
	rm *.*~