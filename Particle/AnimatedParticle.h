#pragma once

#include "../Particle.h"
#include "../Updatable.h"

class AnimatedParticle : public Particle, public Updatable
{
public:
    AnimatedParticle(const String &filename);
    virtual ~AnimatedParticle();

    virtual void update();
};
