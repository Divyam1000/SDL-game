#ifndef GAME_HPP
#define GAME_HPP

#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class game
{
    public:
        game();
        virtual ~game();

        void Init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen );

        void HandleEvents();
        void Update();
        void Render();
        void Clean();

        bool Running(){ return isRunning; }

                static SDL_Renderer *Renderer;


    protected:

    private:
        bool isRunning;
        SDL_Window *Window;

};

#endif // GAME_HPP
