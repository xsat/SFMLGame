#pragma once

#include <SFML/Graphics.hpp>

#include "Component/Input.h"
#include "Component/Ai.h"
#include "Component/Physics.h"
#include "Component/Graphics.h"

#include "Container.h"

using sf::RenderWindow;
using sf::VideoMode;

class Game
{
public:
	Game();
	~Game();

	void start();
private:
    RenderWindow *window;

    Container *container;

    Component *input;
    Component *ai;
    Component *physics;
    Component *graphics;
};
