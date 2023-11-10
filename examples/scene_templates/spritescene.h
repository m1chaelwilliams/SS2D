#ifndef SPRITESCENE_H
#define SPRITESCENE_H

#include <raylib.h>
#include "scene.h"
#include "sprite.h"
#include <map>
#include <vector>
#include <string>

namespace ss2d {
    class SpriteScene : public Scene {
        public:
            virtual void onLoad() override;
            virtual void onUnload() override;
            virtual void update() override;
            virtual void draw() override;

            SpriteScene() : Scene() {
                Scene::onLoad();
                onLoad();
            }
            ~SpriteScene() {
                onUnload();
            }
        private:
            std::map<std::string, Texture2D> textures;
            std::vector<Sprite> sprites;
    };
}

#endif