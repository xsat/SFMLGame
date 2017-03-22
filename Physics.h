#pragma once

#include "Component.h"

class Physics : public Component
{
public:
    Physics();
    ~Physics();

    virtual void update(RenderWindow *window);
};
