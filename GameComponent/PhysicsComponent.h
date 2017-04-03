#pragma once

#include "../GameComponent.h"
#include "../Container/ProcessesContainer.h"

class PhysicsComponent : public GameComponent
{
public:
    PhysicsComponent(ProcessesContainer *container);
    ~PhysicsComponent();

    virtual void update(RenderWindow *window);
private:
    ProcessesContainer *container_;
};
