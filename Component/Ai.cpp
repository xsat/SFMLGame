#include "Ai.h"

Ai::Ai(Animation *test) : test2(test)
{
}

Ai::~Ai()
{
}

void Ai::update(RenderWindow *window)
{
    test2->update();
}
