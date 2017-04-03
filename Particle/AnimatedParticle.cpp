#include "AnimatedParticle.h"

AnimatedParticle::AnimatedParticle(const String &filename, 
                                   const Time &frame_time, 
                                   const IntRects &frames)
    : Particle(filename)
    , Process()
    , animation_(new Animation(frame_time))
{
    for (IntRect frame : frames) {
        animation_->addFrame(frame);
    }

    setRect(animation_->getFrame());
}

AnimatedParticle::~AnimatedParticle()
{
    delete animation_;
}

void AnimatedParticle::update()
{
    animation_->update();
    setRect(animation_->getFrame());
}
