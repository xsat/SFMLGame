#pragma once

#include <SFML/Graphics.hpp>

#include "Component/Input.h"
#include "Component/Ai.h"
#include "Component/Physics.h"
#include "Component/Graphics.h"

#include "Animation.h"

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

    Animation *test2;

    Input *input;
    Ai *ai;
    Physics *physics;
    Graphics *graphics;
};
