#include "Matriz.h"
#include <iostream>
#include <vector>

Matriz::Matriz(long espacoQuadrado)
{
    this->espacoQuadrado = espacoQuadrado;

    // for (int i = 0; i < espacoQuadrado; i++)
    // {
    //     for (int j = 0; j < espacoQuadrado; j++)
    //     {
    //         Celula c;
    //         celulas.push_back(c);
    //     }
    // }   
    
    std::cout << "Matriz criada" << std::endl;
}

std::vector<Celula>& Matriz::getCelulas(){
    return celulas;
}

// void Matriz::addCelula(Celula celula)
// {
//     celulas.push_back(celula);
// }