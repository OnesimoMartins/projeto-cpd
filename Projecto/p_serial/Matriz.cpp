#include "Matriz.h"
#include <iostream>
#include <vector>

Matriz::Matriz(long espacoQuadrado)
{
    this->espacoQuadrado = espacoQuadrado;    
    std::cout << "Matriz criada" << std::endl;
}

std::vector<Celula>& Matriz::getCelulas(){
    return celulas;
}

void Matriz::calcularCentrosDeMassaCelulas()
{
    for (int i = 0; i < celulas.size(); i++)
    {
        celulas[i].calcularCentroMassa();
    }
}