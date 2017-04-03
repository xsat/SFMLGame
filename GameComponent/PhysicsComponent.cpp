#include "PhysicsComponent.h"

PhysicsComponent::PhysicsComponent(ProcessesContainer *container)
    : GameComponent()
    , container_(container)
{
}

PhysicsComponent::~PhysicsComponent()
{
}

void PhysicsComponent::update(RenderWindow *window)
{
    for (Process *process : *container_->getProcesses()) {
        process->update();
    }
}
