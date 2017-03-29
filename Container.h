#pragma once

#include "Container\ParticlesContainer.h"
#include "Container\ProcessesContainer.h"

#include "Particle.h"

class Container : public ParticlesContainer, public ProcessesContainer
{
public:
    Container();
    ~Container();

    virtual const Particles *getParticles() const;
    virtual const Processes *getProcesses() const;
private:
    Particles *particles;
    Processes *processes;
};

