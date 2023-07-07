#include "player.hpp"

player::player()
{
    srcR.x = 0;
    srcR.y = 0;
    srcR.h = 32;
    srcR.w = 32;

    dstR.x = 0;
    dstR.y = 0;
    dstR.h = 32;
    dstR.w = 32;

}

player::~player()
{
    //dtor
}

SDL_Texture* player :: Init_PlayerTexture(SDL_Texture* Tex)
{
    PlayerTex = Tex;
    return PlayerTex;  // simply for a value (not very important)
}

int player :: Player_Render(SDL_Renderer *Renderer)
{
    SDL_RenderCopy(Renderer, PlayerTex, NULL, &dstR);

    return 1;
}

int player :: Player_Update(int x, int y)
{
    xpos = x;
    ypos = y;

    dstR.x = xpos;
    dstR.y = ypos;
    dstR.h = 32;
    dstR.w = 32;


    //xpos ++;
    //ypos ++;

}
