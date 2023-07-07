#include "texture_manager.hpp"

texture_manager::texture_manager()
{
    //ctor
}

texture_manager::~texture_manager()
{
    //dtor
}

SDL_Texture* texture_manager :: LoadTexture (const char * Path, SDL_Renderer* Ren)
{
    SDL_Surface* TempSurface = IMG_Load(Path);
    SDL_Texture* Tex = SDL_CreateTextureFromSurface(Ren, TempSurface);
    SDL_FreeSurface(TempSurface);
    return Tex;
}
