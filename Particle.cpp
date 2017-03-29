#include "Particle.h"

Particle::Particle(const String &filename, const IntRect &area) 
    : Drawable()
    , texture(new Texture())
    , sprite(new Sprite())
{
    texture->loadFromFile(filename, area);
    texture->setRepeated(true);
    sprite->setTexture(*texture);
    sprite->setTextureRect(area);
}

Particle::~Particle()
{
    delete sprite;
    delete texture;
}

void Particle::setRect(const IntRect &rect)
{
    sprite->setTextureRect(rect);
}

void Particle::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(*sprite, states);
}
