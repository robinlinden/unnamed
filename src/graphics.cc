#include "graphics.h"

#include <SDL2/SDL.h>

namespace {
static const uint16_t kWidth = 640;
static const uint16_t kHeight = 480;
}

Graphics::Graphics()
: window_(SDL_CreateWindow(
        "unnamed2",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        kWidth,
        kHeight,
        SDL_WINDOW_RESIZABLE))
, renderer_(SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED)) {
    SDL_RenderSetLogicalSize(renderer_, kWidth, kHeight);
}

Graphics::~Graphics() {
    SDL_DestroyRenderer(renderer_);
    SDL_DestroyWindow(window_);
}
