#CFLAGS = -O0 -g
CFLAGS = -O3 -funroll-loops

CFLAGS += -Wall
LFLAGS = -lpthread -lgmp

CFLAGS += $(foreach def, $(TETRIS_DEFINES), -D$(def))

OBJS = \
	main \
	pieces \
	crossings \
	matrix_multiply \
	piece_data

all: tetris

# Figure out the names of all the object files
OBJ_FILES = $(addsuffix .o, $(OBJS))

SRC_FILES = $(foreach obj, $(OBJS), $(filter %.c %.cpp, $(wildcard $(obj).*)))

tetris: $(OBJ_FILES)
	g++ $^ $(LFLAGS) -o $@

clean:
	rm -f tetris *.o src/*.o

