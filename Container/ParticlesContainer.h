#pragma once

#include "../Particles.h"

class ParticlesContainer
{
public:
    virtual Particles *getParticles() = 0;
};
