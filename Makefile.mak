all: Main.o String.o
	g++ Main.o String.o -o program.exe
Main.o: Main.cpp
	g++ -c Main.cpp
String.o: String.cpp String.h
	g++ -c String.cpp