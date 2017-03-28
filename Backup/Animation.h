#pragma once

#include <vector>
#include <iostream>

#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\RenderTarget.hpp>
#include <SFML\Graphics\RenderStates.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\String.hpp>
#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>

using sf::Drawable;
using sf::RenderTarget;
using sf::RenderStates;
using sf::String;
using sf::IntRect;
using sf::Texture;
using sf::Sprite;
using sf::Time;
using sf::Clock;

using std::vector;

class Animation : public Drawable
{
public:
    Animation(const String &filename, const Time &frame_time);
    ~Animation();
    void addFrame(const IntRect &frame);
    virtual void update();
private:
    virtual void draw(RenderTarget &target, RenderStates states) const;

    Texture *texture;
    Sprite *sprite;

    Time frame_time;

    Clock current_time;

    unsigned int current_frame;

    vector<IntRect> frames;
};
