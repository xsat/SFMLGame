#pragma once

#include "../Component.h"

class Graphics : public Component
{
public:
    Graphics();
    ~Graphics();

    virtual void update(RenderWindow *window);
};
