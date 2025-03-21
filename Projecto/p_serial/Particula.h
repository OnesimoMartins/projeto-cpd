//
// Created by Onesimo Martins on 3/20/2025.
//

#include <cstdint>

#ifndef P_SERIAL_PARTICULA_H
#define P_SERIAL_PARTICULA_H


class Particula {
private:
public:
    double massa, vx, vy, sx, sy, forcaGravitacional;
    uint64_t id;
    void toString();
    Particula(double massa, double vx, double vy, double sx, double sy);
    double distanciaOutraParticula(double x, double y);
    bool checarColisao(Particula p2);
    bool operator==(const Particula& other) const;
    // double checarColisao(Particula p2);
};


#endif //P_SERIAL_PARTICULA_H
