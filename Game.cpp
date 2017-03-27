#include "Game.h"

Game::Game() 
    : window(new RenderWindow(VideoMode(800, 600), "Default title"))
    , test2(new Animation("policia.jpg", sf::seconds(0.2)))
    , input(new Input()), ai(new Ai(test2)), physics(new Physics())
    , graphics(new Graphics(test2))
{
    window->setFramerateLimit(60);

    test2->addFrame(IntRect(0, 0, 90, 90));
    test2->addFrame(IntRect(180, 0, 90, 90));
}

Game::~Game()
{
    delete graphics;
    delete physics;
    delete ai;
    delete input;
    delete test2;
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
