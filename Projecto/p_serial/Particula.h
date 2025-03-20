//
// Created by Onesimo Martins on 3/20/2025.
//
#include "Posicao.h"

#ifndef P_SERIAL_PARTICULA_H
#define P_SERIAL_PARTICULA_H


class Particula {
private:
    /* data */

public:
    float massa;
    Posicao posicao;
    float velocidade, forcaGravitacional;
    void toString();
//  Particula(/* args */);
    Particula(Posicao posicao, float massa, float velocidade);
};


#endif //P_SERIAL_PARTICULA_H
