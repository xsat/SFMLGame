#include "GraphicsComponent.h"

GraphicsComponent::GraphicsComponent(ParticlesContainer *container)
    : GameComponent()
    , container(container)
{
}

GraphicsComponent::~GraphicsComponent()
{
}

void GraphicsComponent::update(RenderWindow *window)
{
    window->clear();

    for (Drawable *drawable : *container->getParticles()) {
        window->draw(*drawable);
    }

    window->display();
}
