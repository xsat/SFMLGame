#pragma once

#include "../Component.h"

class Ai : public Component
{
public:
	Ai();
	~Ai();

    virtual void update(RenderWindow *window);
};
