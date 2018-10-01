#pragma once

struct Game {
    Game();
    ~Game();

private:
    void eventLoop();
    void update();
    void draw();
};
