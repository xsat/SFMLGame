#pragma once

#include <SFML/Graphics.hpp>

#include "Component/Input.h"
#include "Component/Ai.h"
#include "Component/Physics.h"
#include "Component/Graphics.h"

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
