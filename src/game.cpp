#include "../include/game.hpp"

game::game()
{

}

game::~game()
{
    //dtor
}


void game :: Init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen )
{
    int flags = 0;

    if(fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING) < 0 )
    {
        std :: cout << "SDL Not initialised!" << :: std :: endl;
        isRunning =  false;
    }
    else
    {
        std::cout << "SDL initialised!" <<std::endl;

        Window = SDL_CreateWindow(title, xpos, ypos, width, height,flags);

        if(Window == NULL)
        {
            std :: cout<< "Window not created!" << std :: endl;
        }
        else
        {
            std :: cout << "Window created!" << std :: endl;

        }

        Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED );
        if(Renderer == NULL)
        {
            std :: cout << "Renderer not created!" << std :: endl;
        }
        else
        {
            std :: cout << "Renderer created!" << std :: endl;

            SDL_SetRenderDrawColor(Renderer, 255, 255, 255 ,255);
        }

        if(Player.Player_InitTexture(Renderer) == !1)
        {
            std :: cout<< "Player Texture not created!" <<std :: endl;
        }
        else
        {
            std :: cout<< "Player Texture created!" <<std :: endl;
        }

        isRunning = true;
    }

}

void game :: HandleEvents()
{
    SDL_Event Event;
    SDL_PollEvent(&Event);

    switch (Event.type){
    case SDL_QUIT:
        isRunning = false;
        break;

    default:
        break;
    }


}
void game :: Update()
{

}
void game :: Render()
{
    SDL_RenderClear(Renderer);

    Player.Player_Render(Renderer);

    SDL_RenderPresent(Renderer);
}
void game :: Clean()
{
    SDL_DestroyWindow(Window);
    SDL_DestroyRenderer(Renderer);
    SDL_Quit();
}
