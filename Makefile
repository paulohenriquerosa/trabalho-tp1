CPP      = g++
SRCS       = $(shell find src/ -name *.cpp)
OBJ      = $(addprefix obj/,$(SRCS:%.cpp=%.o))
DIR      = $(addprefix obj/,$(shell ls -d src/))
BIN      = a.out
RM       = rm -rf

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

all-before: 
	mkdir -p obj $(DIR)

clean: clean-custom
	${RM} $(OBJ) $(BIN) obj

$(BIN): $(OBJ)
	$(CPP) $(OBJ) -o $(BIN) -g -ldl -pthread

obj/%.o: %.cpp
	$(CPP) -c $< -o $@

