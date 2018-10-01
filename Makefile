CFLAGS = -std=c++11 -g3 -Wall -Wextra -Wpedantic -Werror -fno-exceptions
LDLIBS = -lSDL2

all: unnamed

unnamed: src/**.cc
	$(CC) $(CFLAGS) $^ $(LDLIBS) -o $@

run: unnamed
	./$^

clean:
	$(RM) **/*.o unnamed
