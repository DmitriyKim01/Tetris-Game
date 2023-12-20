#include <iostream>
#include <raylib.h>

using namespace std;

Color Green = Color{38, 185, 154, 255};
Color Dark_Green = Color{20, 160, 133, 255};
Color Light_Green = Color{129, 204, 184, 255};
Color Yellow = Color{243, 213, 91, 255};


int main () {
    // Screen settings
    const int SCREEN_WIDTH = GetMonitorWidth(GetCurrentMonitor());
    const int SCREEN_HEIGHT = GetMonitorHeight(GetCurrentMonitor());
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Ping Pong");
    SetTargetFPS(165);

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(Dark_Green);
       
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
    
