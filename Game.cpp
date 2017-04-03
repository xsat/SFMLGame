#include "Game.h"

Game::Game() 
    : window_(new RenderWindow(VideoMode(800, 600), "Default title"))
    , container_(new Container())
    , input_(new InputComponent())
    , ai_(new AiComponent())
    , physics_(new PhysicsComponent(container_))
    , graphics_(new GraphicsComponent(container_))
{
    window_->setFramerateLimit(60);
}

Game::~Game()
{
    delete graphics_;
    delete physics_;
    delete ai_;
    delete input_;
    delete container_;
    delete window_;
}

void Game::start()
{
    while (window_->isOpen()) {
        input_->update(window_);
        window_->clear();
        ai_->update(window_);
        physics_->update(window_);
        graphics_->update(window_);
    }
}
