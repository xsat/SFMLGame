#include "Container.h"

Container::Container() 
    : ParticlesContainer()
    , ProcessesContainer()
    , particles_(new Particles())
    , processes_(new Processes())
{
    particles_->emplace_back(new Particle("grass.png",
                            IntRect(0, 0, 800, 600))); // TODO(Xsat): Check memory leak

    AnimatedParticle *grass2 = 
        new AnimatedParticle("grass2.png",  sf::seconds(0.5), { 
                                 IntRect(180, 0, 90, 90), 
                                 IntRect(90, 0, 90, 90), 
                                 IntRect(0, 0, 90, 90) 
                             });

    particles_->emplace_back(grass2);
    processes_->emplace_back(grass2);
}

Container::~Container()
{
    delete processes_;
    delete particles_;
}

const Particles *Container::getParticles() const
{
    return particles_;
}

const Processes *Container::getProcesses() const
{
    return processes_;
}
