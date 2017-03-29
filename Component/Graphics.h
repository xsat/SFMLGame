#pragma once

#include "../Component.h"
#include "../Container/ParticlesContainer.h"

class Graphics : public Component
{
public:
    Graphics(ParticlesContainer *container);
    ~Graphics();

    virtual void update(RenderWindow *window);
private:
    ParticlesContainer *container;
};
