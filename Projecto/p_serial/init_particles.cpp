#include <vector>
#include "init_particles.h"
#include "Matriz.h"

#define _USE_MATH_DEFINES
#include <math.h>
#define G 6.67408e-11
#define EPSILON2 (0.005*0.005)
#define DELTAT 0.1

using namespace std;

unsigned int seed;

void init_r4uni(int input_seed)
{
    seed = input_seed + 987654321;
}
double rnd_uniform01()
{
    int seed_in = seed;
    seed ^= (seed << 13);
    seed ^= (seed >> 17);
    seed ^= (seed << 5);
    return 0.5 + 0.2328306e-09 * (seed_in + (int) seed);
}
double rnd_normal01()
{
    double u1, u2, z, result;
    do {
        u1 = rnd_uniform01();
        u2 = rnd_uniform01();
        z = sqrt(-2 * log(u1)) * cos(2 * M_PI * u2);
        result = 0.5 + 0.15 * z;      // Shift mean to 0.5 and scale
    } while (result < 0 || result >= 1);
    return result;
}

void init_particles(long userseed,
    double side,long ncside, 
    long long n_part, Matriz& matriz)
{
    double (*rnd01)() = rnd_uniform01;
    long long i;

    if(userseed < 0) {
        rnd01 = rnd_normal01;
        userseed = -userseed;
    }

    for (int i = 0; i < matriz.espacoQuadrado; i++)
    {
        for (int j = 0; j < matriz.espacoQuadrado; j++)
        {
            Celula c;
            matriz.getCelulas().push_back(c);
        }
    }   
    
    init_r4uni(userseed);

    for(i = 0; i < n_part; i++) {

        double sx = rnd01() * side;
        double sy = rnd01() * side;
        double vx = (rnd01() - 0.5) * side / ncside / 5.0;
        double vy = (rnd01() - 0.5) * side / ncside / 5.0;
        double m = rnd01() * 0.01 * (ncside * ncside) / n_part / G * EPSILON2;

        Particula p(m,vx,vy,sx,sy);
        p.toString();
        matriz.getCelulas()[i % matriz.getCelulas().size()].adicionarParticula(p);
    }
}
