CXX = g++
CXXFLAGS = -std=c++11
SRC_FILES = main.cpp projeto.cpp tarefa.cpp atividade.cpp usuario.cpp
OUTPUT = main

all: $(OUTPUT)

$(OUTPUT): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC_FILES)

.PHONY: clean

clean:
	rm -f $(OUTPUT)
