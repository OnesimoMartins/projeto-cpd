#include "Matriz.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

Matriz::Matriz(long espacoQuadrado)
{
    this->espacoQuadrado = espacoQuadrado;    
    this->numeroColisoes= 0;
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

uint64_t Matriz::getNumeroColisoes(){
    return numeroColisoes;
}

Particula Matriz::getParticula0(){
    return this->celulas[0].getParticulas()[0];
}

void Matriz::checarColisoes(){
     std::vector<Particula> listaFinal = {};

     for (auto &&celula : celulas)
     {
       listaFinal.insert(listaFinal.end(),celula.getParticulas().begin(),celula.getParticulas().end()); 
     }
     
     
    //  auto item_remover = listaFinal.at(2);  // Aqui o item será 3

    //  // Encontrando o item no vetor (usando std::find)
    //  auto it = std::find_if(listaFinal.begin(), listaFinal.end(), [&](const Particula& p) {
    //     return p == item_remover;  // Comparison logic (can be adjusted based on your needs)
    // });
 
    //  // Verificando se o item foi encontrado
    //  if (it != listaFinal.end()) {
    //      listaFinal.erase(it);  // Removendo o item
    //  }
    // int i2=0;
 
    for (uint64_t i = 0; i < listaFinal.size(); i++) {
        for (uint64_t j = i + 1; j < listaFinal.size(); j++) {
            // Se as partículas tiverem o mesmo id
            // std::cout << "R comp " << i2++ << std::endl;
            if (listaFinal[i].checarColisao(listaFinal[j])) {
                // Remover ambos
                listaFinal.erase(listaFinal.begin() + j); // Remover a segunda partícula
                listaFinal.erase(listaFinal.begin() + i); // Remover a primeira partícula
                numeroColisoes+=2;
                std::cout << "Removidos os itens com id " << listaFinal[i].id << std::endl;
                break;  // Após a remoção, não podemos continuar com j, então saímos do loop
            }
        }
    }

     std::cout << "MTODAS PARTICULAS.." << listaFinal.size() << std::endl;
}