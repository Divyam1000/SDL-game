#include "texture_manager.hpp"

texture_manager::texture_manager()
{
    //ctor
}

texture_manager::~texture_manager()
{
    //dtor
}

SDL_Texture* texture_manager :: LoadTexture (const char * Path)
{
    SDL_Surface* TempSurface = IMG_Load(Path);
    SDL_Texture* Tex = SDL_CreateTextureFromSurface(game :: Renderer, TempSurface);
    SDL_FreeSurface(TempSurface);
    return Tex;
}

 SDL_Texture* texture_manager :: DrawTexture (SDL_Texture* Element, SDL_Rect srcR, SDL_Rect dstR)
{
    SDL_RenderCopy(game :: Renderer, Element, &srcR, &dstR);
}

