#ifndef MAP_HPP
#define MAP_HPP

#include "SDL.h"

class map
{
    public:
        map();
        virtual ~map();

        void LoadMap(int arr[10][20]);
        void DrawMap();

    protected:

    private:
        int Map [10][20];
        SDL_Rect srcR, dstR;

        SDL_Texture* Block;
        SDL_Texture* BouncingBlock;
        SDL_Texture* BreakingBlock;

};

#endif // MAP_HPP
