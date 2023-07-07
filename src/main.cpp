const int Screen_Width = 640;
const int Screen_Height = 480;

#include "../include/game.hpp"

game *Game = nullptr;

int FPS = 60;
int FrameDelay = 1000/FPS;

int FrameStart;
int FrameTime;


int main(int arg, char *argv[])
{
    Game = new game();

    Game->Init("NewGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Screen_Width, Screen_Height, false);

    while (Game->Running())
    {
        FrameStart = SDL_GetTicks();

        Game->HandleEvents();
        Game->Update();
        Game->Render();

        FrameTime = SDL_GetTicks()- FrameStart;

        if(FrameDelay > FrameTime)
        {
            SDL_Delay(FrameDelay - FrameTime);

        }
    }

    Game->Clean();

    return 0;
}
