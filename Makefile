CC:= gcc
CFLAGS:= -Wall
DEPS:= person.h
OBJ:= main.o person.o
TARGET:= makeperson

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET) 