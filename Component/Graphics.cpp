#include "Graphics.h"

Graphics::Graphics() : test(new Particle("grass.png", IntRect(0, 0, 800, 600)))
{
}

Graphics::~Graphics()
{
    delete test;
}

void Graphics::update(RenderWindow *window)
{
    
    window->clear();
    window->draw(*test);
    window->display();
}
