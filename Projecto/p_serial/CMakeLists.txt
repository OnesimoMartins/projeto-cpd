# Definir a versão mínima do CMake e o nome do projeto
cmake_minimum_required(VERSION 3.10)
project(parsim)

# Definir o padrão do C++ (como no Makefile)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2")

# Adicionar os arquivos fonte
set(SOURCES
        main.cpp
        Particula.cpp
)

# Criar o executável a partir dos arquivos fonte
add_executable(parsim ${SOURCES})

# Definir dependências ou outras opções, se necessário
# Por exemplo, se for necessário linkar alguma biblioteca externa
# target_link_libraries(parsim nome_da_biblioteca)
