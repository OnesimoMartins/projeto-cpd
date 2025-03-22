# Definir o compilador e as flags
CXX = g++
CXXFLAGS = -std=c++11 -O2

# Nome do executável
TARGET = parsim

# Arquivos fonte
SRC = Particula.cpp Celula.cpp  Matriz.cpp init_particles.cpp main.cpp

# Arquivos objeto (compilação dos fontes)
OBJ = $(SRC:.cpp=.o)

# Regra para compilar o programa
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Regra para compilar os arquivos .cpp para .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJ) $(TARGET)

# Recompilar tudo
rebuild: clean $(TARGET)
