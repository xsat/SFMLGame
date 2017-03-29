#pragma once

#include "../Component.h"
#include "../Container/ProcessesContainer.h"

class Physics : public Component
{
public:
    Physics(ProcessesContainer *container);
    ~Physics();

    virtual void update(RenderWindow *window);
private:
    ProcessesContainer *container;
};
