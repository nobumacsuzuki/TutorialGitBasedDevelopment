CC = gcc

CFLAGS = -std=gnu99

TARGET = HelloWorld

SRCS = HelloWorld.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm $(OBJS) $(TARGET) 
