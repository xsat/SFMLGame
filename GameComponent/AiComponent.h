#pragma once

#include "../GameComponent.h"

class AiComponent : public GameComponent
{
public:
    virtual void update(RenderWindow *window);
};
