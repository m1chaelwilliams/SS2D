#ifndef SCENE_H
#define SCENE_H

namespace ss2d {
    class Scene {
        public:
            Scene();
            ~Scene();
            virtual void onLoad();
            virtual void update();
            virtual void draw();
            virtual void onUnload();
            virtual void process();
    };
}

#endif