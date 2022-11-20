all: play

sqlite:
	make -C ../

play.o: play.cpp
	g++ -g -c play.cpp -o play.o

play: sqlite play.o
	g++ -g -o play ../sqlite3.o play.o

