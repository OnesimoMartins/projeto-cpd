#include <iostream>
#include <vector>
#include "Particula.h"

#ifndef CELULA_H
#define CELULA_H

class Celula
{
private:
    double centroMassa;
    double cmx, cmy;
    std::vector<Particula> particulas;
public:
    void calcularCentroMassa();
    void adicionarParticula(Particula p);
    double getCentroMassa();
    double getCMX();
    double getCMY();
    std::vector<Particula>& getParticulas();
    void toString();
    Celula();
};

#endif // CELULA_H