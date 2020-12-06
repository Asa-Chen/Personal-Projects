CC = gcc


tictac: tictac.cc
	g++ -std=c++11 tictac.cc -o tictac
clean: tictac.exe
	rm tictac.exe