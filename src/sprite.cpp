#include "sprite.h"

using namespace ss2d;

Sprite::Sprite(Texture2D texture, Vector2 position) {
  this->texture = texture;
  this->position = position;
  this->size = Vector2{(float)texture.width, (float)texture.height};
  sourceRect = Rectangle{0,0,(float)texture.width, (float)texture.height};
}

Sprite::Sprite(Texture2D texture, Vector2 position, Vector2 size) {
  this->texture = texture;
  this->position = position;
  this->size = size;
  this->sourceRect = Rectangle{0, 0, (float)texture.width, (float)texture.height};
}

Sprite::Sprite(Texture2D texture, Vector2 position, Vector2 size, Rectangle sourceRect) {
  this->texture = texture;
  this->position = position;
  this->size = size;
  this->sourceRect = sourceRect;
}

Rectangle Sprite::getRect() {
  return Rectangle{position.x, position.y, size.x, size.y};
}