#include <iostream>
#include <vector>
#include "Celula.h"

class Matriz
{
private:
    std::vector<Celula> celulas;
    int espacoQuadrado;
public:
    Matriz(int espacoQuadrado);
    void addCelula(Celula celula);
    void checarColisoes();
};

