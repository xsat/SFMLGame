#pragma once

#include <SFML/System/Vector2.hpp>

using sf::Vector2f;

class Component
{
public:
    virtual void move(const Vector2f &offset) = 0;
};
