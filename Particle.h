#pragma once

#include <memory>

#include <SFML\Graphics\RenderTarget.hpp>
#include <SFML\Graphics\RenderStates.hpp>
#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\String.hpp>

using std::shared_ptr;

using sf::Drawable;
using sf::RenderTarget;
using sf::RenderStates;
using sf::Texture;
using sf::Sprite;
using sf::IntRect;
using sf::String;

class Particle : public Drawable
{
public:
    Particle(const String &filename, const IntRect &area = IntRect());
    ~Particle();
private:
    shared_ptr<Texture> texture;
    shared_ptr<Sprite> sprite;

    virtual void draw(RenderTarget &target, RenderStates states) const;
};
