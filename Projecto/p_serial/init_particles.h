#define _USE_MATH_DEFINES
#include <math.h>
#define G 6.67408e-11
#define EPSILON2 (0.005*0.005)
#define DELTAT 0.1
#include <vector>
#include "Matriz.h"

#ifndef P_SERIAL_INIT_PARTICLES_H
#define P_SERIAL_INIT_PARTICLES_H

unsigned int seed;
void init_r4uni(int input_seed);
double rnd_uniform01();
double rnd_normal01();
void init_particles(long userseed, double side, long ncside, 
    long long n_part, Matriz matriz);
#endif