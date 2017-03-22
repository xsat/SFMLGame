#include "Game.h"

Game::Game() : 
    window(new RenderWindow(VideoMode(800, 600), "Default title")),
    input(new Input()), 
    ai(new Ai()), 
    physics(new Physics()), 
    graphics(new Graphics())
{
}

Game::~Game()
{
    delete graphics;
    delete physics;
    delete ai;
    delete input;
    delete window;
}

void Game::start()
{
    while (window->isOpen()) {
        input->update(window);
        window->clear();
        ai->update(window);
        physics->update(window);
        graphics->update(window);
    }
}
