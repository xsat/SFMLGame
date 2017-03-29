#include "Physics.h"

Physics::Physics(ProcessesContainer *container)
    : Component()
    , container(container)
{
}

Physics::~Physics()
{
}

void Physics::update(RenderWindow *window)
{
    for (Process *process : *container->getProcesses()) {
        process->update();
    }
}
