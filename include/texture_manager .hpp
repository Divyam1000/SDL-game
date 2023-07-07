#ifndef TEXTURE_MANAGER _HPP
#define TEXTURE_MANAGER _HPP

#include "SDL.h"

class texture_manager
{
    public:
        texture_manager ();
        virtual ~texture_manager ();

        SDL_Texture LoadTexture(char * Path, SDL_Renderer* Ren);

    protected:

    private:
};

#endif // TEXTURE_MANAGER _HPP
