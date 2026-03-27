CC = gcc
CFLAG = -Wall -Wextra -std=c11 -O2

SRC = src/main.c
OBJ = build/main.o
TARGET = bin/app
RM = rm

all:$(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ): $(SRC)
	$(CC) $(CFLAG) -c $(SRC) -o $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) -rf $(TARGET) $(OBJ)

