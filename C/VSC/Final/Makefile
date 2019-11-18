CC = gcc
DEBUG = -g
CFLAGS = $(DEBUG)
OBJS = Stack.o Queue.o Final.o
TARGET = Final.exe

all : $(TARGET)
$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm -f $(OBJS) $(TARGET)