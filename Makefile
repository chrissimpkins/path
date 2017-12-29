CFLAGS=-g -O3 -Wall -Wextra -DNDEBUG $(OPTFLAGS)
PREFIX?=/usr/local/bin

SOURCES=src/main.c
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

TARGET=path

all: $(TARGET)

build:
	@mkdir -p bin

clean:
	rm bin/$(TARGET)
	rm $(OBJECTS)

dev: CFLAGS=-g -Wall -Wextra $(OPTFLAGS)
dev: all

install: all
	install $(TARGET) $(PREFIX)/

$(TARGET): build $(OBJECTS)
	$(CC) $(OBJECTS) -o bin/$(TARGET)

$(OBJECTS): $(SOURCES)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@

