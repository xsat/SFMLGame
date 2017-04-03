#pragma once

#include <SFML/Graphics.hpp>

#include "GameComponent/InputComponent.h"
#include "GameComponent/AiComponent.h"
#include "GameComponent/PhysicsComponent.h"
#include "GameComponent/GraphicsComponent.h"

#include "Container.h"

using sf::RenderWindow;
using sf::VideoMode;

class Game
{
public:
    Game();
    ~Game();

    void start();
private:
    RenderWindow *window_;

    Container *container_;

    GameComponent *input_;
    GameComponent *ai_;
    GameComponent *physics_;
    GameComponent *graphics_;
};
