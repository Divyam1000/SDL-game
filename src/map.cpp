#include "map.hpp"
#include "texture_manager.hpp"

int Lvl1[10][20] = {
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

map::map()
{
    Block = texture_manager :: LoadTexture("C:/Users/Asus-PC/Desktop/SDL_trials/second/first game/assets/Block.png");
    BouncingBlock = texture_manager :: LoadTexture("C:/Users/Asus-PC/Desktop/SDL_trials/second/first game/assets/BouncingBlock.png");
    BreakingBlock = texture_manager :: LoadTexture("C:/Users/Asus-PC/Desktop/SDL_trials/second/first game/assets/BreakingBlock.png");

    LoadMap(Lvl1);

    srcR.x = srcR.y = 0;
    srcR.h = srcR.w = 128;
    dstR.h = dstR.w = 32;
    dstR.x = dstR.y = 0;
}

map::~map()
{
    //dtor
}

void map :: LoadMap(int arr[10][20])
{
    for(int i=0; i<10; i++)
        for(int j=0; j<20; j++)
            Map[i][j] = arr [i][j];
}

void map :: DrawMap()
{
    int type = 0;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<20; j++)
        {
            dstR.x = i * 32;
            dstR.y = j * 32;

            type = Map[i][j];
            switch (type)
            {
            case 1:
                texture_manager :: DrawTexture(Block, srcR, dstR);
                break;

            case 2:
                texture_manager :: DrawTexture(BouncingBlock, srcR, dstR);
                break;

            case 3:
                texture_manager :: DrawTexture (BreakingBlock, srcR, dstR);
                break;

            default :
                break;
            }
        }

    }
}
