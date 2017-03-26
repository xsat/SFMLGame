#pragma once

#include <memory>

#include <SFML/Graphics.hpp>

using std::shared_ptr;

using sf::RenderWindow;

class Component
{
public:
    virtual void update(RenderWindow *window) = 0;
};
