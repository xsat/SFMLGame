#pragma once

#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>

#include "IntRects.h"
#include "Updatable.h"

using sf::Time;
using sf::Clock;

class Animation : public Updatable
{
public:
    Animation(const Time &frame_time);
    virtual ~Animation();

    void addFrame(const IntRect &frame);
    const IntRect &getFrame() const;

    virtual void update();
private:
    Time frame_time;
    Clock current_time;

    int current_frame;

    IntRects *frames;
};

