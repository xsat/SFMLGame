#include "Animation.h"

Animation::Animation(const Time &frame_time) 
    : Updatable()
    , frame_time(frame_time)
    , current_time()
    , current_frame(0)
    , frames(new IntRects)
{
}

Animation::~Animation()
{
    delete frames;
}

void Animation::addFrame(const IntRect &frame)
{
    frames->emplace_back(frame);
}

const IntRect &Animation::getFrame() const
{
    if (frames->empty()) {
        return IntRect();
    }

    return frames->at(current_frame);
}

void Animation::update()
{
    if (frame_time > current_time.getElapsedTime()) {
        return;
    }

    current_time.restart();
    current_frame++;

    if (current_frame >= frames->size()) {
        current_frame = 0;
    }
}
