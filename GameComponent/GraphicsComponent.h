#pragma once

#include "../GameComponent.h"
#include "../Container/ParticlesContainer.h"

class GraphicsComponent : public GameComponent
{
public:
    GraphicsComponent(ParticlesContainer *container);
    ~GraphicsComponent();

    virtual void update(RenderWindow *window);
private:
    ParticlesContainer *container_;
};
