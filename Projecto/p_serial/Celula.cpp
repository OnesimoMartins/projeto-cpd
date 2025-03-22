#include "Celula.h"
#include "Particula.h"

Celula::Celula()
{
    // std::cout << "Celula criada" << std::endl;
}

double Celula::getCentroMassa()
{
    return centroMassa;
}

double Celula::getCMX()
{
    return cmx;
}

double Celula::getCMY()
{
    return cmy;
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
        somaMassa += particulas[i].massa;
        somaX += particulas[i].sx * particulas[i].massa;
        somaY += particulas[i].sy * particulas[i].massa;
    }

    cmx = (1/somaMassa) * somaX;
    cmy = (1/somaMassa) * somaY;   
}

void Celula::toString() {
    std::cout << "Célula: " << std::endl;
    std::cout << "Centro de Massa: " << centroMassa << std::endl;
    std::cout << "Centro de Massa - X: " << cmx << ", Y: " << cmy << std::endl;
    std::cout << "Número de partículas: " << particulas.size() << std::endl;

    // Exibir informações sobre cada partícula
    // for (size_t i = 0; i < particulas.size(); ++i) {
    //     std::cout << "  Partícula " << i + 1 << ": "
    //             //   << "Posição (" << particulas[i].x << ", " << particulas[i].y << "), "
    //               << "Velocidade (" << particulas[i].vx << ", " << particulas[i].vy << "), "
    //               << "Massa: " << particulas[i].m << std::endl;
    // }
}