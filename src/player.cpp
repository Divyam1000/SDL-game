#include "player.hpp"

player::player()
{
    dstR.h = 64;
    dstR.w = 64;
    dstR.x = 0;
    dstR.y = 0;
}

player::~player()
{
    //dtor
}

SDL_Texture* player :: PlayerTexture()
{
    return PlayerTex;

}

int player :: Player_InitTexture(SDL_Renderer *Renderer)
{
    SDL_Surface* TempSurface=IMG_Load("C:/Users/Asus-PC/Desktop/SDL_trials/second/first game/assets/player.png");
    PlayerTex = SDL_CreateTextureFromSurface(Renderer, TempSurface);
    SDL_FreeSurface(TempSurface);
    return 1;
}

int player :: Player_Render(SDL_Renderer *Renderer)
{
    SDL_RenderCopy(Renderer, PlayerTex, NULL, &dstR);
    return 1;
}
