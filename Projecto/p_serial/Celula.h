#include <iostream>
#include <vector>
#include "Particula.h"

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

