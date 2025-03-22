//
// Created by Onesimo Martins on 3/20/2025.
//
#include "Particula.h"
#include <iostream>
#include <cmath>

using namespace std;

Particula::Particula(double massa, double vx, double vy, double sx, double sy){
    this->massa = massa;
    this->vx = vx;
    this->vy = vy;
    this->sx = sx;
    this->sy = sy;
    // std::cout << " EU SOU INSTANCIA PARTICULA " << std::endl;
}
double Particula::distanciaOutraParticula(double x, double y){// Calcula a distancia euclidiana desta particula em relação a outra
    return std::sqrt(std::pow(x - sx, 2) + std::pow(y - sy, 2));
}

bool Particula::checarColisao(Particula p2){
   return this->distanciaOutraParticula(p2.sx,p2.sy)<=0.005;
}

void Particula::toString() {
    // Formatar a saída para exibir 2 casas decimais, por exemplo
    std::cout << "Particula [massa: " << massa 
              << ", vx: " << vx
              << ", vy: " << vy
              << ", sx: " << sx
              << ", sy: " << sy
              << ", forcaGravitacional: " << forcaGravitacional 
              << "]" << std::endl;
}