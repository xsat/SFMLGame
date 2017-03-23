#pragma once

#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\String.hpp>

using sf::Drawable;
using sf::RenderTarget;
using sf::RenderStates;
using sf::Texture;
using sf::Sprite;
using sf::IntRect;
using sf::String;

class Particle
{
public:
    Particle(const String &filename, const IntRect &area = IntRect());
    ~Particle();
private:
    Texture *texture;
    Sprite *sprite;

    virtual void draw(RenderTarget& target, RenderStates states) const;
};
