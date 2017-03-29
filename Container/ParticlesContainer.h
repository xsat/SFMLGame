#pragma once

#include "../Particles.h"

class ParticlesContainer
{
public:
    virtual const Particles *getParticles() const = 0;
};
