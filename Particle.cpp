#include "Particle.h"

Particle::Particle(const String &filename, const IntRect &area) : Drawable(),
    texture(new Texture()), sprite(new Sprite())
{
    texture->loadFromFile(filename, area);
    texture->setRepeated(true);
    sprite->setTexture(*texture);
    sprite->setTextureRect(area);
}

Particle::~Particle()
{
}

void Particle::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(*sprite, states);
}
