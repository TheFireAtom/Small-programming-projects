#include "raylib.h"

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Project");

    // Main game loop
    //--------------------------------------------------------------------------------------
    while (!WindowShouldClose()) {
        // Update
        //----------------------------------------------------------------------------------
        // Put your game logic here, like moving objects or checking for input.
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(100, 100, 50, 50, BLUE);

        DrawText("Hello, Raylib!", 300, 200, 20, BLACK);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();

    return 0;
}