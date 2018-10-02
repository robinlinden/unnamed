#pragma once

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
    Graphics();
    ~Graphics();

private:
    SDL_Window *window_;
    SDL_Renderer *renderer_;
};
