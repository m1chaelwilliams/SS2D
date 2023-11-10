// Sphere's Simple 2D Framework
// 
// Simple driver program

#include <raylib.h>
#include "ss2d.h"

int main() {
    InitWindow(1280, 720, "SS2D Framework Driver");

    ss2d::Scene scene;

    while (!WindowShouldClose()) {
        scene.update();

        BeginDrawing();

        ClearBackground(SKYBLUE);

        scene.draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}