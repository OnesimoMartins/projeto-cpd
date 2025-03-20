#include "Matriz.h"
#include <iostream>
#include <vector>

Matriz::Matriz(int espacoQuadrado)
{
    this->espacoQuadrado = espacoQuadrado;

    for (int i = 0; i < espacoQuadrado; i++)
    {
        for (int j = 0; j < espacoQuadrado; j++)
        {
            Celula c;
            celulas.push_back(c);
        }
    }   
    
    std::cout << "Matriz criada" << std::endl;
}

// void Matriz::addCelula(Celula celula)
// {
//     celulas.push_back(celula);
// }