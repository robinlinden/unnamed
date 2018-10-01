CFLAGS = -std=c++11 -g3 -Wall -Wpedantic -Werror

all: unnamed

unnamed: src/main.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) *.o unnamed
