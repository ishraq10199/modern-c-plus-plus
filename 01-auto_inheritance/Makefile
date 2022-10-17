CXX = clang++

SOURCE_CXX = src/01.cc

TARGET = build/01

LDFLAGS_COMMON = -std=c++2a

all:
	$(CXX) $(SOURCE_CXX) $(LDFLAGS_COMMON) -o $(TARGET)

clean:
	rm -rf *.o $(TARGET)