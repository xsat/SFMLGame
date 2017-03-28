#pragma once

#include <vector>

#include "../Particle.h"

using std::vector;

class AnimatedParticle : public Particle
{
public:
    AnimatedParticle(const String &filename, const IntRect &area = IntRect());
    virtual ~AnimatedParticle();

    void addFrame(const IntRect &frame);
private:
    vector<IntRect> frames;
};
