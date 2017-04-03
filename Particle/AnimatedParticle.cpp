#include "AnimatedParticle.h"

AnimatedParticle::AnimatedParticle(const String &filename, 
                                   const Time &frame_time, 
                                   const IntRects &frames)
    : Particle(filename)
    , Process()
    , animation(new Animation(frame_time))
{
    for (IntRect frame : frames) {
        animation->addFrame(frame);
    }

    setRect(animation->getFrame());
}

AnimatedParticle::~AnimatedParticle()
{
    delete animation;
}

void AnimatedParticle::update()
{
    animation->update();
    setRect(animation->getFrame());
}
