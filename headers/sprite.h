#ifndef SPRITE_H
#define SPRITE_H

#include <raylib.h>

namespace ss2d {
    class Sprite {
    public:
        Texture2D texture;
        Vector2 position;
        Vector2 size;
        Rectangle sourceRect;

        Sprite(Texture2D texture, Vector2 position, Vector2 size, Rectangle sourceRect);
        Sprite(Texture2D texture, Vector2 position, Vector2 size);
        Sprite(Texture2D texture, Vector2 position);

        Rectangle getRect();
    };
}

#endif