//
//  WORK IN PROGRESS
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned int uint;



class Simulator {
    public:
        uint rows;
        uint cols;
        uint num_cars;
        uint num_rides;
        uint bonus;
        uint sim_steps;
        uint steps_taken;

        Simulator () {}

        void read_input() {
            cin >> this->rows >> this->cols;
            cin >> this->num_cars >> this->num_rides;
            cin >> bonus >> sim_steps;
            this->steps_taken = 0;
        }

        void print_parameters() {
            printf("\nGrid size: %d x %d\n", this->rows, this->cols);
            printf("Cars: %d\n", this->num_cars);
            printf("Rides: %d\n", this->num_rides);
            printf("Bonus: %d\n", this->bonus);
            printf("Total steps: %d\n\n", this->sim_steps);
        }
};

int main() {
    Simulator sim = Simulator();
    sim.read_input();
    sim.print_parameters();
}
