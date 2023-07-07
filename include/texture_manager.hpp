#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "SDL.h"
#include "SDL_image.h"

class texture_manager
{
    public:
        texture_manager();
        virtual ~texture_manager();

        static SDL_Texture* LoadTexture (const char * Path, SDL_Renderer* Ren);
    protected:

    private:
};

#endif // TEXTURE_MANAGER_HPP
