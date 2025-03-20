#include "Celula.h"
#include "Particula.h"

Celula::Celula()
{
    std::cout << "Celula criada" << std::endl;
}

void Celula::adicionarParticula(Particula particula)
{
    particulas.push_back(particula);
}

void Celula::calcularCentroMassa()
{
    double somaMassa = 0;
    double somaX = 0;
    double somaY = 0;

    for (int i = 0; i < particulas.size(); i++)
    {
        // somaMassa += particulas[i].getMassa();
        // somaX += particulas[i].getPosicao().x;
        // somaY += particulas[i].getPosicao().y;
    }

    centroMassa = somaMassa;
    centroMassa = somaX / particulas.size();
    centroMassa = somaY / particulas.size();
}