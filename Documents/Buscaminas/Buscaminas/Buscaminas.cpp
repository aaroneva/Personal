
#include <iostream>
#include "SDL.h"

int main(int argc, char* args[])
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window;

    window = SDL_CreateWindow("Buscaminas", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, 480, 640, SDL_WINDOW_SHOWN);

    SDL_Renderer* canvas;

    canvas = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);



    while (true)
    {
        SDL_SetRenderDrawColor(canvas, 255, 0, 0, 255);

        SDL_RenderClear(canvas);

        SDL_RenderPresent(canvas);

    }



    return 0;
}

