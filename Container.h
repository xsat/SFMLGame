#pragma once

#include "Container\ParticlesContainer.h"
#include "Container\ProcessesContainer.h"

#include "Particle.h"

class Container : public ParticlesContainer, public ProcessesContainer
{
public:
    Container();
    ~Container();

    virtual Particles *getParticles();
    virtual Processes *getProcesses();
private:
    Particles *particles;
    Processes *processes;
};

