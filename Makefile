# run: "make" OR "make run"
# bulid: "make bulid"
# clean: "make clean"

CC = g++
CFLAGS = -Wno-c++11-extensions
H_FILES = Book.h Database.h Librarian.h Library.h Person.h User.h 
CPP_FILES = Book.cpp Database.cpp Librarian.cpp Library.cpp Person.cpp User.cpp 

all: run

run: bulid
    ./bulid

bulid: $(H_FILES) $(CPP_FILES)
    $(CC) $(CFLAGS) $(CPP_FILES) Main.cpp -o bulid

clean:
    rm -f bulid
