#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "SDL.h"
#include "SDL_image.h"
#include "game.hpp"

class texture_manager
{
    public:
        texture_manager();
        virtual ~texture_manager();

        static SDL_Texture* LoadTexture (const char * Path);
        static SDL_Texture* DrawTexture (SDL_Texture* Element, SDL_Rect srcR, SDL_Rect dstR);
    protected:

    private:
};

#endif // TEXTURE_MANAGER_HPP
