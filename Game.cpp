#include "Game.h"

Game::Game() 
    : window(new RenderWindow(VideoMode(800, 600), "Default title"))
    , container(new Container())
    , input(new InputComponent())
    , ai(new AiComponent())
    , physics(new PhysicsComponent(container))
    , graphics(new GraphicsComponent(container))
{
    window->setFramerateLimit(60);
}

Game::~Game()
{
    delete graphics;
    delete physics;
    delete ai;
    delete input;
    delete container;
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
