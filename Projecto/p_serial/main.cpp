#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Particula.h"
// #include "Celula.h"
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

// // Função para executar a simulação
// void run_simulation(int num_particles, int num_steps, double time_step, double space_size, vector<Particle>& particles) {
//     for (int step = 0; step < num_steps; step++) {
//         update_particles(num_particles, particles, time_step);
//         check_collisions(num_particles, particles);
//     }
// }

int main(int argc, char* argv[]) {
    // if (argc != 6) {
    //     cerr << "Uso: ./parsim <semente> <tamanho_espaco> <grade> <num_particulas> <num_passos>" << endl;
    //     return 1;
    // }

    // Matr

    int seed = 1;//atoi(argv[1]);
    double espacoQuadrado = 10; //atof(argv[2]);
    int espacoCelula = 5;//atoi(argv[3]);
    int num_particles = 90;//atoi(argv[4]);
    int num_steps = atoi(argv[5]);

    Matriz matriz(espacoQuadrado);

    init_particles(seed, espacoQuadrado, espacoCelula, num_particles, matriz);

    std::cout << "Celulas: " << matriz.getCelulas().size() << std::endl;
    
    // init_particles(num_particles, space_size, particles, seed);

    // Executar a simulação
    double time_step = 0.01;  // Passo de tempo arbitrário
    // run_simulation(num_particles, num_steps, time_step, space_size, particles);

    
    std::cout << "Celulas: " << matriz.getCelulas().size() << std::endl;
    // Exibir os resultados
    // Aqui, ajustamos a saída conforme o problema solicita. Exibimos as posições e velocidades das partículas.
    // for (const auto& p : particles) {
    //     cout << p.x << " " << p.y << " " << p.velocidade_x << " " << p.velocidade_y << " " << p.massa << endl;
    // }

    return 0;
}
