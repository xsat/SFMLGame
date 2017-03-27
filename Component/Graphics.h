#pragma once

#include "../Component.h"
#include "../Particle.h"
#include "../Animation.h"

#include <SFML/System/Export.hpp>

class Graphics : public Component
{
public:
    Graphics(Drawable *test3);
    ~Graphics();

    virtual void update(RenderWindow *window);
private:
    Drawable *test;
    Drawable *test2;
};
