#include "Matriz.h"
#include <iostream>
#include <vector>

using namespace std;

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
        celulas[i].toString();
    }
}

void Matriz::checarColisoes(){
     std::vector<Particula> listaFinal = {};

     for (auto &&celula : celulas)
     {
       listaFinal.insert(listaFinal.end(),celula.getParticulas().begin(),celula.getParticulas().end()); 
     }
     
     
    //  auto item_remover = listaFinal.at(2);  // Aqui o item será 3

    //  // Encontrando o item no vetor (usando std::find)
    //  auto it = std::find(listaFinal.begin(), listaFinal.end(), item_remover);
 
    //  // Verificando se o item foi encontrado
    //  if (it != listaFinal.end()) {
    //      listaFinal.erase(it);  // Removendo o item
    //  }
 
     std::cout << "MTODAS PARTICULAS.." << listaFinal.size() << std::endl;
}