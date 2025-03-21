#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Particula.h"
#include "Matriz.h"
#include "init_particles.h"


using namespace std;


// Função para calcular a força gravitacional entre duas partículas
// void compute_gravitational_force(const Particle& a, const Particle& b, double& fx, double& fy) {
//     double dx = b.x - a.x;
//     double dy = b.y - a.y;
//     double distance = sqrt(dx*dx + dy*dy);

//     if (distance < 0.005) {
//         fx = 0;
//         fy = 0;
//         return;
//     }

//     double force = G * a.massa * b.massa / (distance * distance);
//     fx = force * dx / distance;
//     fy = force * dy / distance;
// }

// // Função para atualizar a posição e velocidade das partículas
// void update_particles(int num_particles, vector<Particle>& particles, double time_step) {
//     vector<double> fx(num_particles, 0.0);
//     vector<double> fy(num_particles, 0.0);

//     // Calcular as forças gravitacionais entre todas as partículas
//     for (int i = 0; i < num_particles; i++) {
//         for (int j = i + 1; j < num_particles; j++) {
//             double force_x, force_y;
//             compute_gravitational_force(particles[i], particles[j], force_x, force_y);
//             fx[i] += force_x;
//             fy[i] += force_y;
//             fx[j] -= force_x;
//             fy[j] -= force_y;
//         }
//     }

//     // Atualizar posição e velocidade com a aceleração (F = ma)
//     for (int i = 0; i < num_particles; i++) {
//         double ax = fx[i] / particles[i].massa;
//         double ay = fy[i] / particles[i].massa;
//         particles[i].velocidade_x += ax * time_step;
//         particles[i].velocidade_y += ay * time_step;
//         particles[i].x += particles[i].velocidade_x * time_step;
//         particles[i].y += particles[i].velocidade_y * time_step;
//     }
// }

// // Função para verificar colisões entre partículas
// void check_collisions(int& num_particles, vector<Particle>& particles) {
//     for (int i = 0; i < num_particles; i++) {
//         for (int j = i + 1; j < num_particles; j++) {
//             double dx = particles[i].x - particles[j].x;
//             double dy = particles[i].y - particles[j].y;
//             double distance = sqrt(dx*dx + dy*dy);
//             if (distance < 0.005) {
//                 // Partículas colidem e "evaporam"
//                 particles[i] = particles[num_particles - 1];
//                 particles[j] = particles[num_particles - 2];
//                 num_particles -= 2; // Remover as partículas colididas
//             }
//         }
//     }
// }


int main(int argc, char* argv[]) {
    // if (argc != 6) {
    //     cerr << "Uso: ./parsim <semente> <tamanho_espaco> <grade> <num_particulas> <num_passos>" << endl;
    //     return 1;
    // }

    // Matr

    int seed = 1;//atoi(argv[1]);
    double espacoQuadrado = 2; //atof(argv[2]);
    int espacoCelula = 5;//atoi(argv[3]);
    int num_particles = 90;//atoi(argv[4]);
    int num_steps = 2;//atoi(argv[5]);

    Matriz matriz(espacoQuadrado);

    init_particles(seed, espacoQuadrado, espacoCelula, num_particles, matriz);

    std::cout << "Celulas: " << matriz.getCelulas().capacity() << std::endl;


    // Executar a simulação
    for (int i = 1; i <= num_steps; ++i) {
        matriz.calcularCentrosDeMassaCelulas();
        matriz.checarColisoes();
    }

    std::cout << "\n" << std::endl;
    std::cout << matriz.getParticula0().sx <<" " <<  matriz.getParticula0().sy<< std::endl;
    std::cout << matriz.getNumeroColisoes() << std::endl;

    return 0;
}
