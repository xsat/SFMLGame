#include "Container.h"

Container::Container() 
    : ParticlesContainer()
    , ProcessesContainer()
    , particles(new Particles())
    , processes(new Processes())
{
    particles->emplace_back(new Particle("grass.png", 
                            IntRect(0, 0, 800, 600))); // TODO(Xsaat): Check memory leak

    AnimatedParticle *grass2 = 
        new AnimatedParticle("grass2.png", 
                             sf::seconds(0.5), 
                             { 
                                IntRect(180, 0, 90, 90), 
                                IntRect(90, 0, 90, 90), 
                                IntRect(0, 0, 90, 90) 
                            });

    particles->emplace_back(grass2);
    processes->emplace_back(grass2);
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
