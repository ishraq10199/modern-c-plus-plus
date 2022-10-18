CXX = clang++

SOURCE_CXX = src/02.cc

INCLUDE_DIR = include

TARGET = build/02

LDFLAGS_COMMON = -std=c++2a

all:
	$(CXX) $(SOURCE_CXX) -I$(CURDIR)/$(INCLUDE_DIR) $(LDFLAGS_COMMON) -o $(TARGET)

clean:
	rm -rf *.o $(TARGET)