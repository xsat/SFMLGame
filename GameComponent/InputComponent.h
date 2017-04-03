#pragma once

#include "../GameComponent.h"

using sf::Event;

class InputComponent : public GameComponent
{
public:
    virtual void update(RenderWindow *window);
};
