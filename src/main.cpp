#include "../include/game.hpp"

const int Screen_Width = 640;
const int Screen_Height = 480;
game *Game = nullptr;

int main(int arg, char *argv[])
{
    Game = new game();

    Game->Init("NewGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Screen_Width, Screen_Height, false);

    while (Game->Running())
    {
        Game->HandleEvents();
        Game->Update();
        Game->Render();
    }

    Game->Clean();

    return 0;
}
