GC= g++ -c

all: output

output: Library_Main.o Media.o SearchEngine.o Book.o Video.o Film.o Periodic.o
	g++ Library_Main.o Media.o SearchEngine.o Book.o Video.o Film.o Periodic.o -o a.out

Media: Media.cpp Media.h
	$(GC) Media.cpp Media.h  Media.o

SearchEngine: SearchEngine.cpp SearchEngine.h
	$(GC) SearchEngine.cpp SearchEngine.h  SearchEngine.o

Book: Book.cpp Book.h
	$(GC) Book.cpp Book.h  Book.o 

Video: Video.cpp Video.h
	$(GC) Video.cpp Video.h  Video.o

Film: Film.cpp Film.h
	$(GC) Film.cpp Film.h  Film.o

Periodic: Periodic.cpp Periodic.h
	$(GC) Periodic.cpp Periodic.h  Periodic.o

clean:
	rm *.out *.o
