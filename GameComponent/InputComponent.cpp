#include "InputComponent.h"

void InputComponent::update(RenderWindow *window)
{
    Event event;

    while (window->pollEvent(event)) {
        if (event.type == Event::Closed) {
            window->close();
        }
    }
}
