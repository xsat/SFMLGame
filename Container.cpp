#include "Container.h"

Container::Container() 
    : ParticlesContainer()
    , ProcessesContainer()
    , particles(new Particles())
    , processes(new Processes())
{
    particles->emplace_back(new Particle("grass.png", IntRect(0, 0, 800, 600))); // TODO: Check memory leak
}

Container::~Container()
{
    delete processes;
    delete particles;
}

const Particles *Container::getParticles() const
{
    return particles;
}

const Processes *Container::getProcesses() const
{
    return processes;
}
