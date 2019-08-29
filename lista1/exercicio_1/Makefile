INCLUDE=.
SOURCE_FILES=$(wildcard ./*.c)

all: $(SOURCE_FILES)
	g++ -o racional -I$(INCLUDE) $(SOURCE_FILES) -std=c++11 -rdynamic
clean:
	rm racional
