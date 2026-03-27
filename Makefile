CC = cc
CFLAG = -g -Wall
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
SRCS = $(wildcard $(SRC)/*.c)
BINDIR = bin
BIN = $(BINDIR)/main
SRC = src
OBJ = obj
SUBMITNAME=project01.zip
RM = rm

all:$(BIN)

realease: CFLAG= -Wall -02 -DNDEBUG
realease: clean
realease: $(BIN)

$(BIN):$(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	$(RM) -rf $(BINDIR)/* $(OBJ)/*

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)




