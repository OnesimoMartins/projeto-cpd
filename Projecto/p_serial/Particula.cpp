//
// Created by Onesimo Martins on 3/20/2025.
//
#include "Particula.h"
#include <iostream>

void Particula::toString(){
    std::cout << " EU SOU UMA PARTICULA " << std::endl;
}

Particula::Particula(double massa, double vx, double vy, double sx, double sy){
    this->massa = massa;
    this->vx = vx;
    this->vy = vy;
    this->sx = sx;
    this->sy = sy;
    std::cout << " EU SOU INSTANCIA PARTICULA " << std::endl;
}
