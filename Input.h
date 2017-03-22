#pragma once

#include "Component.h"

using sf::Event;

class Input : public Component
{
public:
    Input();
    ~Input();

    virtual void update(RenderWindow *window);
};
