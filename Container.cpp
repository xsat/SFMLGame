#include "Container.h"

Container::Container() 
    : ParticlesContainer()
    , ProcessesContainer()
    , particles(new Particles())
    , processes(new Processes())
{
    particles->emplace_back(new Particle("grass.png", IntRect(0, 0, 800, 600)));
}

Container::~Container()
{
    delete processes;
    delete particles;
}

Particles *Container::getParticles()
{
    return particles;
}

Processes *Container::getProcesses()
{
    return processes;
}
