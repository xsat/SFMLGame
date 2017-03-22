#include "Input.h"

Input::Input()
{
}

Input::~Input()
{
}

void Input::update(RenderWindow *window)
{
    Event event;

    while (window->pollEvent(event)) {
        if (event.type == Event::Closed) {
            window->close();
        }
    }
}
