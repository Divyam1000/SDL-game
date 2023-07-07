#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "SDL.h"
#include "SDL_image.h"
#include "texture_manager.hpp"

class player
{
    public:
        player();
        virtual ~player();

        SDL_Texture* Init_PlayerTexture(SDL_Texture* Tex);
        int Player_Render(SDL_Renderer *Renderer);
        int Player_Update(int x, int y);


    protected:

    private:
        SDL_Texture* PlayerTex = nullptr;
        SDL_Rect srcR, dstR;
        int xpos, ypos;

};

#endif // PLAYER_HPP
