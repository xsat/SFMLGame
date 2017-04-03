#include "Animation.h"

Animation::Animation(const Time &frame_time) 
    : Process()
    , frame_time_(frame_time)
    , current_time_()
    , current_frame_(0)
    , frames_(new IntRects)
{
}

Animation::~Animation()
{
    delete frames_;
}

void Animation::addFrame(const IntRect &frame)
{
    frames_->emplace_back(frame);
}

const IntRect &Animation::getFrame() const
{
    if (frames_->empty()) {
        return IntRect();
    }

    return frames_->at(current_frame_);
}

void Animation::update()
{
    if (frame_time_ > current_time_.getElapsedTime()) {
        return;
    }

    current_time_.restart();
    current_frame_++;

    if (current_frame_ >= frames_->size()) {
        current_frame_ = 0;
    }
}
