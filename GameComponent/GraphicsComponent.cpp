#include "GraphicsComponent.h"

GraphicsComponent::GraphicsComponent(ParticlesContainer *container)
    : GameComponent()
    , container_(container)
{
}

GraphicsComponent::~GraphicsComponent()
{
}

void GraphicsComponent::update(RenderWindow *window)
{
    window->clear();

    for (Drawable *drawable : *container_->getParticles()) {
        window->draw(*drawable);
    }

    window->display();
}
