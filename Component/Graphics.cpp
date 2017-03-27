#include "Graphics.h"

Graphics::Graphics(Drawable *test3)
    : test(new Particle("grass.png", IntRect(0, 0, 800, 600)))
    , test2(test3)
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
    window->draw(*test2);
    window->display();
}
