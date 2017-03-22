#pragma once

#include <SFML/Graphics.hpp>

using sf::RenderWindow;

class Component
{
public:
    virtual void update(RenderWindow *window) = 0;
};
