#pragma once

#include "../Component.h"
#include "../Particle.h"

class Graphics : public Component
{
public:
    Graphics();
    ~Graphics();

    virtual void update(RenderWindow *window);
private:
    Drawable *test;
};
