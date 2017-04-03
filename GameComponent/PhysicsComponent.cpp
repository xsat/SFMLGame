#include "PhysicsComponent.h"

PhysicsComponent::PhysicsComponent(ProcessesContainer *container)
    : GameComponent()
    , container(container)
{
}

PhysicsComponent::~PhysicsComponent()
{
}

void PhysicsComponent::update(RenderWindow *window)
{
    for (Process *process : *container->getProcesses()) {
        process->update();
    }
}
