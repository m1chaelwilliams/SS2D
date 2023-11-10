#include "scene.h"

using namespace ss2d;

Scene::Scene() {
    onLoad();
}
Scene::~Scene() {
    onUnload();
}

void Scene::onLoad() {

}

void Scene::onUnload() {

}

void Scene::update() {

}

void Scene::draw() {

}

void Scene::process() {
    update();
    draw();
}