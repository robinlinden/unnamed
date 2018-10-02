#include "game.h"

#include "graphics.h"

#include <SDL2/SDL.h>

#include <algorithm>

Game::Game() {
    SDL_Init(SDL_INIT_EVERYTHING);
    eventLoop();
}

Game::~Game() {
    SDL_Quit();
}

void Game::eventLoop() {
    Graphics graphics;

    bool running = true;
    while (running) {
        const uint32_t start_time_ms = SDL_GetTicks();

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_KEYDOWN:
                if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {
                    running = false;
                }
                break;
            default:
                break;
            }
        }

        update();
        draw();

        const uint16_t elapsed_time_ms = SDL_GetTicks() - start_time_ms;
        SDL_Delay(std::max(0, 1000 / 60 - elapsed_time_ms));
    }
}

void Game::update() {
    SDL_Delay(100);
}

void Game::draw() {
    SDL_Delay(30);
}
