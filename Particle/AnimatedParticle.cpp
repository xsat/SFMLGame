#include "AnimatedParticle.h"

AnimatedParticle::AnimatedParticle(const String &filename, const IntRect &area) 
    : Particle(filename, area), frames()
{
}

AnimatedParticle::~AnimatedParticle()
{

}

void AnimatedParticle::addFrame(const IntRect &frame)
{
    frames.emplace_back(frame);
}