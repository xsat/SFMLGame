#pragma once

#include "../Component.h"
#include "../Animation.h"

#include <iostream>

class Ai : public Component
{
public:
	Ai(Animation *test);
	~Ai();

    virtual void update(RenderWindow *window);

private:
    Animation *test2;
};
