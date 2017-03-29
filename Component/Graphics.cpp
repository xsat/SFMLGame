#include "Graphics.h"

Graphics::Graphics(ParticlesContainer *container) 
    : Component()
    , container(container)
{
}

Graphics::~Graphics()
{
}

void Graphics::update(RenderWindow *window)
{
    window->clear();

    for (Drawable *drawable : *container->getParticles()) {
        window->draw(*drawable);
    }

    window->display();
}
