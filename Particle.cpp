#include "Particle.h"

Particle::Particle(const String &filename, 
                   const IntRect &area) 
    : Drawable()
    , texture_(new Texture())
    , sprite_(new Sprite())
{
    texture_->loadFromFile(filename, area);
    texture_->setRepeated(true);
    sprite_->setTexture(*texture_);
    sprite_->setTextureRect(area);
}

Particle::~Particle()
{
    delete sprite_;
    delete texture_;
}

void Particle::setRect(const IntRect &rect)
{
    sprite_->setTextureRect(rect);
}

void Particle::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(*sprite_, states);
}
