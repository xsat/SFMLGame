#include "Graphics.h"

Graphics::Graphics()
{
}

Graphics::~Graphics()
{
}

void Graphics::update(RenderWindow *window)
{
    window->clear();
    window->display();
}
