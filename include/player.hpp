#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "SDL.h"
#include "SDL_image.h"

class player
{
    public:
        player();
        virtual ~player();

        SDL_Texture* PlayerTexture();
        int Player_InitTexture(SDL_Renderer *Renderer);
        int Player_Render(SDL_Renderer *Renderer);

    protected:

    private:
        SDL_Texture* PlayerTex = nullptr;
        SDL_Rect srcR, dstR;

};

#endif // PLAYER_HPP
