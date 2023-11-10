#include "spritescene.h"

using namespace ss2d;

void SpriteScene::onLoad() {
    Scene::onLoad();

    // onload code goes here
}

void SpriteScene::onUnload() {
    Scene::onUnload();

    // unload textures
    for (const auto& texturePair : textures) {
        UnloadTexture(texturePair.second);
    }

    // unload code goes here
}

void SpriteScene::update() {
    Scene::update();

    // update code goes here
}

void SpriteScene::draw() {
    Scene::draw();

    // draw code goes here
}