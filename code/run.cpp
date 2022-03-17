#include "solarsystem/solarsystem.hpp"

int main() {
    SolarSystem solar_system;
    while (solar_system.getDisplay()->isRunning()) {
        solar_system.update();
        solar_system.render();
    }

    return 0;
}