#pragma once

#include "../Particle.h"
#include "../Process.h"
#include "../Animation.h"

class AnimatedParticle : public Particle, public Process
{
public:
    AnimatedParticle(const String &filename, 
                     const Time &frame_time, 
                     const IntRects &frames);
    virtual ~AnimatedParticle();

    virtual void update();
private:
    Animation *animation;
};
