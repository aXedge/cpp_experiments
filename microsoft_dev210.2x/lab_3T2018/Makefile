BASE_DIR=.

BIN_DIR=$(BASE_DIR)/obj
INC_DIR=$(BASE_DIR)/inc
SRC_DIR=$(BASE_DIR)/src

CC=g++

CFLAGS=-I$(INC_DIR)

LFLAGS=-lm

_DEPS = person.h \
	   student.h

DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))

_OBJ = main.o \
	   person.o \
	   student.o

OBJ = $(patsubst %,$(BIN_DIR)/%,$(_OBJ))

all: dirs objs

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

objs: $(OBJ)
	$(CC) -o $(BIN_DIR)/$@ $^ $(CFLAGS) $(LFLAGS)

dirs:
	mkdir -p $(BIN_DIR)

.PHONY: clean

clean:
	rm -f $(BIN_DIR)/*.o *~ core $(INC_DIR)/*~
	rm -rf $(BIN_DIR)

