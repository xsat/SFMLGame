#include "Particle.h"

Particle::Particle(const String &filename, const IntRect &area) :
    texture(new Texture()), sprite(new Sprite())
{
    texture->loadFromFile(filename, area);
    sprite->setTexture(*texture);
    sprite->setTextureRect(area);
}

Particle::~Particle()
{
    delete sprite;
    delete texture;
}

void Particle::draw(RenderTarget &target, RenderStates states) const
{

}
