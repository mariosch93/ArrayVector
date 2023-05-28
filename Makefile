CXX := gcc
CXX_FLAGS :=

BIN := bin
SRC := source
INCLUDE := headers

LIBRARIES := 
EXECUTABLE := main.exe

all: $(BIN)/$(EXECUTABLE)

rebuild: clean all

run: rebuild
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*