#include "engine.h"
#include <iostream>

Engine* Engine::s_instance = nullptr;

void Engine::run() {
    char a;
    while (a != 'b') {
        std::cin >> a;
    }
}
