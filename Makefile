CFLAGS=-g -O3 -Wall -Wextra -DNDEBUG $(OPTFLAGS)
PREFIX?=/usr/local/bin

SOURCES=$(wildcard src/*.c src/**/*.c)
HEADERS=$(wildcard src/*.h src/**/*.h)
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

TARGET=path

.PHONY: default all clean

all: $(TARGET)

build:
	@mkdir -p bin

clean:
	-rm bin/$(TARGET)
	-rm $(OBJECTS)

dev: CFLAGS=-g -Wall -Wextra $(OPTFLAGS)
dev: all

install: all
	@mkdir -p $(PREFIX)
	install bin/$(TARGET) $(PREFIX)/

$(TARGET): build $(OBJECTS)
	$(CC) $(OBJECTS) -o bin/$(TARGET)

$(OBJECTS): $(SOURCES) $(HEADERS)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@

