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

// void Matriz::addCelula(Celula celula)
// {
//     celulas.push_back(celula);
// }