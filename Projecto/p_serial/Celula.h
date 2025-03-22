#include <iostream>
#include <vector>
#include "Particula.h"

#ifndef CELULA_H
#define CELULA_H

class Celula
{
private:
    double centroMassa;
    std::vector<Particula> particulas;
public:
    void calcularCentroMassa();
    void adicionarParticula(Particula p);
    double getCentroMassa();
    Celula();
};

#endif // CELULA_H