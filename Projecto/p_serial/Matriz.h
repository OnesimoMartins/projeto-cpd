#include <iostream>
#include <vector>
#include "Celula.h"

#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz
{
private:
    std::vector<Celula> celulas;
public:
    Matriz(long espacoQuadrado);
    void addCelula(Celula celula);
    void checarColisoes();
    long espacoQuadrado;
    std::vector<Celula>& getCelulas();
    void calcularCentrosDeMassaCelulas();
};

#endif 