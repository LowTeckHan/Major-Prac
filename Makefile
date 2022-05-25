# run: "make" OR "make run"
# bulid: "make bulid"
# clean: "make clean"

CC = g++
CFLAGS = -g -Wall
H_FILES = Person.h User.h Book.h Librarian.h Databse.h
CPP_FILES = Book.cpp Librarian.cpp Library.cpp Person.cpp User.cpp Main.cpp Database.cpp

all: run

run: bulid
	./bulid

bulid: $(H_FILES) $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o bulid

clean:
	rm -f bulid