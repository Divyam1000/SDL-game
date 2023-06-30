#ifndef GAME_HPP
#define GAME_HPP

#include "SDL.h"
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

    protected:

    private:
        bool isRunning;
        SDL_Window *Window;
        SDL_Renderer *Renderer;
};

#endif // GAME_HPP
