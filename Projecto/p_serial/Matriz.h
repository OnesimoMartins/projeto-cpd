#include <iostream>
#include <vector>
#include "Celula.h"

class Matriz
{
private:
    std::vector<Celula> celulas;
public:
    Matriz(long espacoQuadrado);
    void addCelula(Celula celula);
    void checarColisoes();
    long espacoQuadrado;
    std::vector<Celula> getCelulas();
};

