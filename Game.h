#pragma once

#include <SFML/Graphics.hpp>

#include "Input.h"
#include "Ai.h"
#include "Physics.h"
#include "Graphics.h"

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

    Input *input;
    Ai *ai;
    Physics *physics;
    Graphics *graphics;
};
