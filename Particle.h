#pragma once

#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\RenderTarget.hpp>
#include <SFML\Graphics\RenderStates.hpp>
#include <SFML\System\String.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>

using sf::Drawable;
using sf::RenderTarget;
using sf::RenderStates;
using sf::IntRect;
using sf::String;
using sf::Texture;
using sf::Sprite;

class Particle : public Drawable
{
public:
    Particle(const String &filename, const IntRect &area = IntRect());
    ~Particle();
private:
    virtual void draw(RenderTarget &target, RenderStates states) const;

    Texture *texture;
    Sprite *sprite;
};
