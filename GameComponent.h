#pragma once

#include <SFML/Graphics.hpp>

using sf::RenderWindow;

class GameComponent
{
public:
    virtual void update(RenderWindow *window) = 0;
};
