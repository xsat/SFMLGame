#include "Animation.h"

Animation::Animation(const String &filename, const Time &frame_time)
    : Drawable()
    , texture(new Texture), sprite(new Sprite)
    , frame_time(frame_time), current_time()
    , current_frame(0), frames()
{
    texture->loadFromFile(filename);
    texture->setRepeated(true);
    sprite->setTexture(*texture);
}

Animation::~Animation()
{
    delete sprite;
    delete texture;
}

void Animation::addFrame(const IntRect &frame)
{
    if (!frames.size()) {
        sprite->setTextureRect(frame);
    }

    frames.emplace_back(frame);
}

void Animation::update()
{
    if (current_time.getElapsedTime() > frame_time) {
        current_time.restart();
        current_frame++;

        if (current_frame > frames.size() - 1) {
            current_frame = 0;
        }

        sprite->setTextureRect(frames.at(current_frame));
    }
}

void Animation::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(*sprite, states);
}
